/* generated configuration header file - do not edit */
#ifndef BSP_CLOCK_CFG_H_
#define BSP_CLOCK_CFG_H_
#define BSP_CFG_CLOCKS_SECURE (0)
#define BSP_CFG_CLOCKS_OVERRIDE (0)
#define BSP_CFG_XTAL_HZ (20000000) /* XTAL 20000000Hz */
#define BSP_CFG_HOCO_FREQUENCY (7) /* HOCO 48MHz */
#define BSP_CFG_PLL_SOURCE (BSP_CLOCKS_SOURCE_CLOCK_MAIN_OSC) /* PLL Src: XTAL */
#define BSP_CFG_PLL_DIV (BSP_CLOCKS_PLL_DIV_2) /* PLL Div /2 */
#define BSP_CFG_PLL_MUL BSP_CLOCKS_PLL_MUL(96,0) /* PLL Mul x80-99|Mul x96|PLL Mul x96.00 */
#define BSP_CFG_PLL_FREQUENCY_HZ (960000000) /* PLL 960000000Hz */
#define BSP_CFG_PLODIVP (BSP_CLOCKS_PLL_DIV_2) /* PLL1P Div /2 */
#define BSP_CFG_PLL1P_FREQUENCY_HZ (480000000) /* PLL1P 480000000Hz */
#define BSP_CFG_PLODIVQ (BSP_CLOCKS_PLL_DIV_2) /* PLL1Q Div /2 */
#define BSP_CFG_PLL1Q_FREQUENCY_HZ (480000000) /* PLL1Q 480000000Hz */
#define BSP_CFG_PLODIVR (BSP_CLOCKS_PLL_DIV_2) /* PLL1R Div /2 */
#define BSP_CFG_PLL1R_FREQUENCY_HZ (480000000) /* PLL1R 480000000Hz */
#define BSP_CFG_PLL2_SOURCE (BSP_CLOCKS_CLOCK_DISABLED) /* PLL2 Disabled */
#define BSP_CFG_PLL2_DIV (BSP_CLOCKS_PLL_DIV_2) /* PLL2 Div /2 */
#define BSP_CFG_PLL2_MUL BSP_CLOCKS_PLL_MUL(96,0) /* PLL2 Mul x80-99|Mul x96|PLL2 Mul x96.00 */
#define BSP_CFG_PLL2_FREQUENCY_HZ (0) /* PLL2 0Hz */
#define BSP_CFG_PL2ODIVP (BSP_CLOCKS_PLL_DIV_2) /* PLL2P Div /2 */
#define BSP_CFG_PLL2P_FREQUENCY_HZ (0) /* PLL2P 0Hz */
#define BSP_CFG_PL2ODIVQ (BSP_CLOCKS_PLL_DIV_2) /* PLL2Q Div /2 */
#define BSP_CFG_PLL2Q_FREQUENCY_HZ (0) /* PLL2Q 0Hz */
#define BSP_CFG_PL2ODIVR (BSP_CLOCKS_PLL_DIV_2) /* PLL2R Div /2 */
#define BSP_CFG_PLL2R_FREQUENCY_HZ (0) /* PLL2R 0Hz */
#define BSP_CFG_CLOCK_SOURCE (BSP_CLOCKS_SOURCE_CLOCK_PLL1P) /* Clock Src: PLL1P */
#define BSP_CFG_CLKOUT_SOURCE (BSP_CLOCKS_CLOCK_DISABLED) /* CLKOUT Disabled */
#define BSP_CFG_SCICLK_SOURCE (BSP_CLOCKS_SOURCE_CLOCK_PLL1P) /* SCICLK Src: PLL1P */
#define BSP_CFG_SPICLK_SOURCE (BSP_CLOCKS_CLOCK_DISABLED) /* SPICLK Disabled */
#define BSP_CFG_CANFDCLK_SOURCE (BSP_CLOCKS_CLOCK_DISABLED) /* CANFDCLK Disabled */
#define BSP_CFG_LCDCLK_SOURCE (BSP_CLOCKS_CLOCK_DISABLED) /* LCDCLK Disabled */
#define BSP_CFG_I3CCLK_SOURCE (BSP_CLOCKS_CLOCK_DISABLED) /* I3CCLK Disabled */
#define BSP_CFG_UCK_SOURCE (BSP_CLOCKS_CLOCK_DISABLED) /* UCK Disabled */
#define BSP_CFG_U60CK_SOURCE (BSP_CLOCKS_CLOCK_DISABLED) /* U60CK Disabled */
#define BSP_CFG_OCTA_SOURCE (BSP_CLOCKS_CLOCK_DISABLED) /* OCTASPICLK Disabled */
#define BSP_CFG_CPUCLK_DIV (BSP_CLOCKS_SYS_CLOCK_DIV_1) /* CPUCLK Div /1 */
#define BSP_CFG_ICLK_DIV (BSP_CLOCKS_SYS_CLOCK_DIV_2) /* ICLK Div /2 */
#define BSP_CFG_PCLKA_DIV (BSP_CLOCKS_SYS_CLOCK_DIV_4) /* PCLKA Div /4 */
#define BSP_CFG_PCLKB_DIV (BSP_CLOCKS_SYS_CLOCK_DIV_8) /* PCLKB Div /8 */
#define BSP_CFG_PCLKC_DIV (BSP_CLOCKS_SYS_CLOCK_DIV_8) /* PCLKC Div /8 */
#define BSP_CFG_PCLKD_DIV (BSP_CLOCKS_SYS_CLOCK_DIV_4) /* PCLKD Div /4 */
#define BSP_CFG_PCLKE_DIV (BSP_CLOCKS_SYS_CLOCK_DIV_2) /* PCLKE Div /2 */
#define BSP_CFG_SDCLK_OUTPUT (1) /* SDCLK Enabled */
#define BSP_CFG_BCLK_DIV (BSP_CLOCKS_SYS_CLOCK_DIV_4) /* BCLK Div /4 */
#define BSP_CFG_BCLK_OUTPUT (2) /* EBCLK Div /2 */
#define BSP_CFG_FCLK_DIV (BSP_CLOCKS_SYS_CLOCK_DIV_8) /* FCLK Div /8 */
#define BSP_CFG_CLKOUT_DIV (BSP_CLOCKS_SYS_CLOCK_DIV_1) /* CLKOUT Div /1 */
#define BSP_CFG_SCICLK_DIV (BSP_CLOCKS_SCI_CLOCK_DIV_4) /* SCICLK Div /4 */
#define BSP_CFG_SPICLK_DIV (BSP_CLOCKS_SPI_CLOCK_DIV_4) /* SPICLK Div /4 */
#define BSP_CFG_CANFDCLK_DIV (BSP_CLOCKS_CANFD_CLOCK_DIV_8) /* CANFDCLK Div /8 */
#define BSP_CFG_LCDCLK_DIV (BSP_CLOCKS_LCD_CLOCK_DIV_2) /* LCDCLK Div /2 */
#define BSP_CFG_I3CCLK_DIV (BSP_CLOCKS_I3C_CLOCK_DIV_3) /* I3CCLK Div /3 */
#define BSP_CFG_UCK_DIV (BSP_CLOCKS_USB_CLOCK_DIV_5) /* UCK Div /5 */
#define BSP_CFG_U60CK_DIV (BSP_CLOCKS_USB60_CLOCK_DIV_5) /* U60CK Div /5 */
#define BSP_CFG_OCTA_DIV (BSP_CLOCKS_OCTA_CLOCK_DIV_4) /* OCTASPICLK Div /4 */
#endif /* BSP_CLOCK_CFG_H_ */
