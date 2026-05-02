/*
 * gpio_driver.h
 *
 *  Created on: 2026. 4. 19.
 *      Author: justjhst
 */

#ifndef GPIO_DRIVER_H_
#define GPIO_DRIVER_H_

#include <stdint.h>

#define RCC_BASE (0x40023800)
#define GPIOA_BASE (0x40020000)

#define RCC_AHB1ENR (*((volatile uint32_t *)(RCC_BASE + 0x30)))

#define GPIOA_MODER (*((volatile uint32_t *)(GPIOA_BASE + 0x00)))
#define GPIOA_OTYPER (*((volatile uint32_t *)(GPIOA_BASE + 0x04)))
#define GPIOA_ODR (*((volatile uint32_t *)(GPIOA_BASE + 0x14)))
#define GPIOA_IDR (*((volatile uint32_t *)(GPIOA_BASE + 0x10)))
#define GPIOA_BSRR (*((volatile uint32_t *)(GPIOA_BASE + 0x18)))

#define GPIO_MODE_INPUT (0x00)
#define GPIO_MODE_OUTPUT (0x01)
#define GPIO_MODE_AF (0x02)
#define GPIO_MODE_ANALOG (0x03)

#define PA5 (5)
#define PA0 (0)

void GPIO_ClockEnable_GPIOA(void);
void GPIO_SetMode(uint8_t pin, uint32_t mode);
void GPIO_Setpin_BSRR(uint8_t pin);
void GPIO_Resetpin_BSRR(uint8_t pin);
void GPIO_Writepin(uint8_t pin, uint8_t state);
void GPIO_Togglepin(uint8_t pin);
uint8_t GPIO_Readpin(uint8_t pin);
void delay_sw (volatile uint32_t count);

#endif /* GPIO_DRIVER_H_ */
