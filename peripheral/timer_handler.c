/*
 * Copyright (c) 2022 EdgeImpulse Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an "AS
 * IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language
 * governing permissions and limitations under the License.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* Includes */
#include "timer_handler.h"
#include "hal_data.h"
#include <stdint.h>

#define MICROSECONDS_TO_SECONDS 1000000

static uint64_t timer_overflow_times;
static uint64_t div_ratio = 0;

static inline void set_timer_overflow_times(uint64_t value);
static inline uint64_t get_timer_overflow_times(void);
static inline uint64_t get_timer_count(void);

/* public functions */
/**
 *
 */
void ei_timer_init(void)
{
    fsp_err_t err = FSP_SUCCESS;
    timer_info_t info;

    err = R_GPT_Open (&g_timer_us_ctrl, &g_timer_us_cfg);

    if (err != FSP_SUCCESS)
    {
        while(1) {
            __NOP();
        }
    }

    (void) R_GPT_InfoGet(&g_timer_us_ctrl, &info);

    div_ratio = (info.clock_frequency / MICROSECONDS_TO_SECONDS);
}

/**
 *
 */
void ei_timer0_start(void)
{
    fsp_err_t err = FSP_SUCCESS;

    /* Start GPT module - no error control for now */
    err = R_GPT_Start (&g_timer_us_ctrl);
    set_timer_overflow_times(0);
}


/**
 *
 */
void ei_timer0_stop(void)
{
    fsp_err_t err = FSP_SUCCESS;

    /* Stop GPT module - no error control for now */
    err =  R_GPT_Stop(&g_timer_us_ctrl);
}

/**
 * @brief callback function for interrupt
 *
 * @param p_args
 */
void periodic_timer_msgq_cb(timer_callback_args_t *p_args)
{
    if (TIMER_EVENT_CYCLE_END == p_args->event) {
        set_timer_overflow_times(get_timer_overflow_times() + 1);
    }
}

/**
 *
 * @return
 */
uint32_t timer_get_ms(void)
{
    return (timer_get_us()/1000u);
}

/**
 *
 * @return
 */
uint32_t timer_get_us(void)
{
    uint64_t overflow_time = ((uint64_t)1 << 32) / div_ratio;
    return (uint32_t)((get_timer_overflow_times() * overflow_time)
         + (get_timer_count()/div_ratio));
}


/**
 *
 * @param value
 */
static inline void set_timer_overflow_times(uint64_t value)
{
    timer_overflow_times = value;
}

/**
 *
 * @return
 */
static inline uint64_t get_timer_overflow_times(void)
{
    return timer_overflow_times;
}

/**
 *
 * @return
 */
static inline uint64_t get_timer_count(void)
{
    timer_status_t status;
    R_GPT_StatusGet(&g_timer_us_ctrl, &status);
    return status.counter;
}
