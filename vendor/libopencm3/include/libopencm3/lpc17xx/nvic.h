/* This file is part of the libopencm3 project.
 *
 * It was generated by the irq2nvic_h script.
 */

#ifndef LIBOPENCM3_LPC17xx_NVIC_H
#define LIBOPENCM3_LPC17xx_NVIC_H

#include <libopencm3/cm3/nvic.h>

/** @defgroup CM3_nvic_defines_LPC17xx User interrupts for LPC 17xx series
    @ingroup CM3_nvic_defines

    @{*/

#define NVIC_USB_ACT_IRQ 33
#define NVIC_I2C0_IRQ 10
#define NVIC_UART1_IRQ 6
#define NVIC_UART3_IRQ 8
#define NVIC_PLL1_IRQ 32
#define NVIC_SPI_IRQ 13
#define NVIC_CAN_ACT_IRQ 34
#define NVIC_USB_IRQ 24
#define NVIC_GPDMA_IRQ 26
#define NVIC_QEI_IRQ 31
#define NVIC_RTC_IRQ 17
#define NVIC_EINT3_IRQ 21
#define NVIC_TIMER3_IRQ 4
#define NVIC_I2C1_IRQ 11
#define NVIC_ADC_IRQ 22
#define NVIC_SSP1_IRQ 15
#define NVIC_BOD_IRQ 23
#define NVIC_I2S_IRQ 27
#define NVIC_EINT0_IRQ 18
#define NVIC_WDT_IRQ 0
#define NVIC_PWM_IRQ 9
#define NVIC_TIMER0_IRQ 1
#define NVIC_EINT1_IRQ 19
#define NVIC_CAN_IRQ 25
#define NVIC_ETHERNET_IRQ 28
#define NVIC_PLL0_IRQ 16
#define NVIC_TIMER2_IRQ 3
#define NVIC_RIT_IRQ 29
#define NVIC_I2C2_IRQ 12
#define NVIC_UART2_IRQ 7
#define NVIC_EINT2_IRQ 20
#define NVIC_TIMER1_IRQ 2
#define NVIC_UART0_IRQ 5
#define NVIC_SSP0_IRQ 14
#define NVIC_MOTOR_PWM_IRQ 30

#define NVIC_IRQ_COUNT 35

/**@}*/

/** @defgroup CM3_nvic_isrprototypes_LPC17xx User interrupt service routines (ISR) prototypes for LPC 17xx series
    @ingroup CM3_nvic_isrprototypes

    @{*/

BEGIN_DECLS

void usb_act_isr(void);
void i2c0_isr(void);
void uart1_isr(void);
void uart3_isr(void);
void pll1_isr(void);
void spi_isr(void);
void can_act_isr(void);
void usb_isr(void);
void gpdma_isr(void);
void qei_isr(void);
void rtc_isr(void);
void eint3_isr(void);
void timer3_isr(void);
void i2c1_isr(void);
void adc_isr(void);
void ssp1_isr(void);
void bod_isr(void);
void i2s_isr(void);
void eint0_isr(void);
void wdt_isr(void);
void pwm_isr(void);
void timer0_isr(void);
void eint1_isr(void);
void can_isr(void);
void ethernet_isr(void);
void pll0_isr(void);
void timer2_isr(void);
void rit_isr(void);
void i2c2_isr(void);
void uart2_isr(void);
void eint2_isr(void);
void timer1_isr(void);
void uart0_isr(void);
void ssp0_isr(void);
void motor_pwm_isr(void);

END_DECLS

/**@}*/

#endif /* LIBOPENCM3_LPC17xx_NVIC_H */
