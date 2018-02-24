/* This file is part of the libopencm3 project.
 *
 * It was generated by the irq2nvic_h script.
 */

#ifndef LIBOPENCM3_LM3S_NVIC_H
#define LIBOPENCM3_LM3S_NVIC_H

#include <libopencm3/cm3/nvic.h>

/** @defgroup CM3_nvic_defines_LM3S User interrupts for LM3S series
    @ingroup CM3_nvic_defines

    @{*/

#define NVIC_WTIMER5B_IRQ 105
#define NVIC_I2C1_IRQ 37
#define NVIC_I2S0_IRQ 52
#define NVIC_GPIOD_IRQ 3
#define NVIC_GPIOF_IRQ 30
#define NVIC_USB0_IRQ 44
#define NVIC_GPIOL_IRQ 56
#define NVIC_PWM1_0_IRQ 134
#define NVIC_GPIOP0_IRQ 116
#define NVIC_TIMER1B_IRQ 22
#define NVIC_GPIOP1_IRQ 117
#define NVIC_GPION_IRQ 112
#define NVIC_I2C3_IRQ 69
#define NVIC_QEI0_IRQ 13
#define NVIC_PWM0_2_IRQ 12
#define NVIC_GPIOG_IRQ 31
#define NVIC_CAN0_IRQ 39
#define NVIC_WATCHDOG_IRQ 18
#define NVIC_PWM0_FAULT_IRQ 9
#define NVIC_SYSEXC_IRQ 106
#define NVIC_GPIOQ0_IRQ 124
#define NVIC_TIMER5A_IRQ 92
#define NVIC_TIMER3B_IRQ 36
#define NVIC_WTIMER5A_IRQ 104
#define NVIC_CAN1_IRQ 40
#define NVIC_I2C4_IRQ 109
#define NVIC_GPIOH_IRQ 32
#define NVIC_WTIMER0A_IRQ 94
#define NVIC_HIBERNATE_IRQ 43
#define NVIC_PWM0_1_IRQ 11
#define NVIC_WTIMER3B_IRQ 101
#define NVIC_FAN0_IRQ 114
#define NVIC_SYSCTL_IRQ 28
#define NVIC_PWM1_1_IRQ 135
#define NVIC_GPIOP7_IRQ 123
#define NVIC_SSI3_IRQ 58
#define NVIC_COMP1_IRQ 26
#define NVIC_TIMER1A_IRQ 21
#define NVIC_COMP0_IRQ 25
#define NVIC_COMP2_IRQ 27
#define NVIC_PECI0_IRQ 107
#define NVIC_GPIOJ_IRQ 54
#define NVIC_UDMA_IRQ 46
#define NVIC_ADC1SS0_IRQ 48
#define NVIC_UART6_IRQ 62
#define NVIC_GPIOA_IRQ 0
#define NVIC_ADC1SS2_IRQ 50
#define NVIC_ADC0SS3_IRQ 17
#define NVIC_WTIMER4B_IRQ 103
#define NVIC_UART3_IRQ 59
#define NVIC_GPIOP2_IRQ 118
#define NVIC_WTIMER2A_IRQ 98
#define NVIC_LPC0_IRQ 108
#define NVIC_GPIOP6_IRQ 122
#define NVIC_GPIOK_IRQ 55
#define NVIC_PWM0_3_IRQ 45
#define NVIC_ADC1SS1_IRQ 49
#define NVIC_GPIOM_IRQ 111
#define NVIC_GPIOB_IRQ 1
#define NVIC_GPIOQ4_IRQ 128
#define NVIC_GPIOQ1_IRQ 125
#define NVIC_UART7_IRQ 63
#define NVIC_SSI0_IRQ 7
#define NVIC_WTIMER3A_IRQ 100
#define NVIC_I2C5_IRQ 110
#define NVIC_GPIOQ7_IRQ 131
#define NVIC_TIMER2A_IRQ 23
#define NVIC_ADC0SS0_IRQ 14
#define NVIC_QEI1_IRQ 38
#define NVIC_TIMER3A_IRQ 35
#define NVIC_GPIOC_IRQ 2
#define NVIC_WTIMER1B_IRQ 97
#define NVIC_PWM1_2_IRQ 136
#define NVIC_TIMER0A_IRQ 19
#define NVIC_TIMER0B_IRQ 20
#define NVIC_UART5_IRQ 61
#define NVIC_TIMER2B_IRQ 24
#define NVIC_EPI0_IRQ 53
#define NVIC_SSI1_IRQ 34
#define NVIC_UART1_IRQ 6
#define NVIC_ADC0SS1_IRQ 15
#define NVIC_GPIOQ5_IRQ 129
#define NVIC_CAN2_IRQ 41
#define NVIC_GPIOQ6_IRQ 130
#define NVIC_GPIOP5_IRQ 121
#define NVIC_ADC1SS3_IRQ 51
#define NVIC_UART4_IRQ 60
#define NVIC_SSI2_IRQ 57
#define NVIC_I2C2_IRQ 68
#define NVIC_TIMER4B_IRQ 71
#define NVIC_GPIOP4_IRQ 120
#define NVIC_GPIOQ3_IRQ 127
#define NVIC_WTIMER1A_IRQ 96
#define NVIC_PWM1_FAULT_IRQ 138
#define NVIC_GPIOP3_IRQ 119
#define NVIC_PWM1_3_IRQ 137
#define NVIC_ETH_IRQ 42
#define NVIC_TIMER4A_IRQ 70
#define NVIC_FLASH_IRQ 29
#define NVIC_PWM0_0_IRQ 10
#define NVIC_WTIMER4A_IRQ 102
#define NVIC_GPIOQ2_IRQ 126
#define NVIC_UART2_IRQ 33
#define NVIC_GPIOE_IRQ 4
#define NVIC_UDMAERR_IRQ 47
#define NVIC_I2C0_IRQ 8
#define NVIC_WTIMER2B_IRQ 99
#define NVIC_WTIMER0B_IRQ 95
#define NVIC_TIMER5B_IRQ 93
#define NVIC_UART0_IRQ 5
#define NVIC_ADC0SS2_IRQ 16

#define NVIC_IRQ_COUNT 139

/**@}*/

/** @defgroup CM3_nvic_isrprototypes_LM3S User interrupt service routines (ISR) prototypes for LM3S series
    @ingroup CM3_nvic_isrprototypes

    @{*/

BEGIN_DECLS

void wtimer5b_isr(void);
void i2c1_isr(void);
void i2s0_isr(void);
void gpiod_isr(void);
void gpiof_isr(void);
void usb0_isr(void);
void gpiol_isr(void);
void pwm1_0_isr(void);
void gpiop0_isr(void);
void timer1b_isr(void);
void gpiop1_isr(void);
void gpion_isr(void);
void i2c3_isr(void);
void qei0_isr(void);
void pwm0_2_isr(void);
void gpiog_isr(void);
void can0_isr(void);
void watchdog_isr(void);
void pwm0_fault_isr(void);
void sysexc_isr(void);
void gpioq0_isr(void);
void timer5a_isr(void);
void timer3b_isr(void);
void wtimer5a_isr(void);
void can1_isr(void);
void i2c4_isr(void);
void gpioh_isr(void);
void wtimer0a_isr(void);
void hibernate_isr(void);
void pwm0_1_isr(void);
void wtimer3b_isr(void);
void fan0_isr(void);
void sysctl_isr(void);
void pwm1_1_isr(void);
void gpiop7_isr(void);
void ssi3_isr(void);
void comp1_isr(void);
void timer1a_isr(void);
void comp0_isr(void);
void comp2_isr(void);
void peci0_isr(void);
void gpioj_isr(void);
void udma_isr(void);
void adc1ss0_isr(void);
void uart6_isr(void);
void gpioa_isr(void);
void adc1ss2_isr(void);
void adc0ss3_isr(void);
void wtimer4b_isr(void);
void uart3_isr(void);
void gpiop2_isr(void);
void wtimer2a_isr(void);
void lpc0_isr(void);
void gpiop6_isr(void);
void gpiok_isr(void);
void pwm0_3_isr(void);
void adc1ss1_isr(void);
void gpiom_isr(void);
void gpiob_isr(void);
void gpioq4_isr(void);
void gpioq1_isr(void);
void uart7_isr(void);
void ssi0_isr(void);
void wtimer3a_isr(void);
void i2c5_isr(void);
void gpioq7_isr(void);
void timer2a_isr(void);
void adc0ss0_isr(void);
void qei1_isr(void);
void timer3a_isr(void);
void gpioc_isr(void);
void wtimer1b_isr(void);
void pwm1_2_isr(void);
void timer0a_isr(void);
void timer0b_isr(void);
void uart5_isr(void);
void timer2b_isr(void);
void epi0_isr(void);
void ssi1_isr(void);
void uart1_isr(void);
void adc0ss1_isr(void);
void gpioq5_isr(void);
void can2_isr(void);
void gpioq6_isr(void);
void gpiop5_isr(void);
void adc1ss3_isr(void);
void uart4_isr(void);
void ssi2_isr(void);
void i2c2_isr(void);
void timer4b_isr(void);
void gpiop4_isr(void);
void gpioq3_isr(void);
void wtimer1a_isr(void);
void pwm1_fault_isr(void);
void gpiop3_isr(void);
void pwm1_3_isr(void);
void eth_isr(void);
void timer4a_isr(void);
void flash_isr(void);
void pwm0_0_isr(void);
void wtimer4a_isr(void);
void gpioq2_isr(void);
void uart2_isr(void);
void gpioe_isr(void);
void udmaerr_isr(void);
void i2c0_isr(void);
void wtimer2b_isr(void);
void wtimer0b_isr(void);
void timer5b_isr(void);
void uart0_isr(void);
void adc0ss2_isr(void);

END_DECLS

/**@}*/

#endif /* LIBOPENCM3_LM3S_NVIC_H */
