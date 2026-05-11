/*
 * gpio_reg.h
 *
 *  Created on: 2026. 5. 2.
 *      Author: justjhst
 */

#ifndef GPIO_REG_H_
#define GPIO_REG_H_

#include <stdint.h>

#define AHB1PERIPH_BASE 0x40020000UL

#define GPIOA_BASEADDR 	(AHB1PERIPH_BASE + 0x0000)
#define GPIOB_BASEADDR 	(AHB1PERIPH_BASE + 0x0400)
#define GPIOC_BASEADDR 	(AHB1PERIPH_BASE + 0x0800)

#define RCC_BASEADDR 	0x40023800UL
#define RCC_AHB1ENR		(*((volatile uint32_t*)(RCC_BASEADDR + 0x30UL)))

typedef union
{
	uint32_t all;
	struct {
		uint32_t MODER0 : 2;
		uint32_t MODER1 : 2;
		uint32_t MODER2 : 2;
		uint32_t MODER3 : 2;
		uint32_t MODER4 : 2;
		uint32_t MODER5 : 2;
		uint32_t MODER6 : 2;
		uint32_t MODER7 : 2;
		uint32_t MODER8 : 2;
		uint32_t MODER9 : 2;
		uint32_t MODER10 : 2;
		uint32_t MODER11 : 2;
		uint32_t MODER12 : 2;
		uint32_t MODER13 : 2;
		uint32_t MODER14 : 2;
		uint32_t MODER15 : 2;
	}bits;
}__attribute__((packed)) GPIO_MODER_t;

typedef union
{
	uint32_t all;
	struct {
		uint32_t OT0 : 1;
		uint32_t OT1 : 1;
		uint32_t OT2 : 1;
		uint32_t OT3 : 1;
		uint32_t OT4 : 1;
		uint32_t OT5 : 1;
		uint32_t OT6 : 1;
		uint32_t OT7 : 1;
		uint32_t OT8 : 1;
		uint32_t OT9 : 1;
		uint32_t OT10 : 1;
		uint32_t OT11 : 1;
		uint32_t OT12 : 1;
		uint32_t OT13 : 1;
		uint32_t OT14 : 1;
		uint32_t OT15 : 1;
		uint32_t RESERVED : 16;
	}bits;
} __attribute__((packed)) GPIO_OTYPER_t;

typedef union
{
	uint32_t all;
	struct {
		uint32_t OSPEEDR0 : 2;
		uint32_t OSPEEDR1 : 2;
		uint32_t OSPEEDR2 : 2;
		uint32_t OSPEEDR3 : 2;
		uint32_t OSPEEDR4 : 2;
		uint32_t OSPEEDR5 : 2;
		uint32_t OSPEEDR6 : 2;
		uint32_t OSPEEDR7 : 2;
		uint32_t OSPEEDR8 : 2;
		uint32_t OSPEEDR9 : 2;
		uint32_t OSPEEDR10 : 2;
		uint32_t OSPEEDR11 : 2;
		uint32_t OSPEEDR12 : 2;
		uint32_t OSPEEDR13 : 2;
		uint32_t OSPEEDR14 : 2;
		uint32_t OSPEEDR15 : 2;
	}bits;
}__attribute__((packed)) GPIO_OSPEEDR_t;

typedef union
{
	uint32_t all;
	struct {
		uint32_t PUPDR0 : 2;
		uint32_t PUPDR1 : 2;
		uint32_t PUPDR2 : 2;
		uint32_t PUPDR3 : 2;
		uint32_t PUPDR4 : 2;
		uint32_t PUPDR5 : 2;
		uint32_t PUPDR6 : 2;
		uint32_t PUPDR7 : 2;
		uint32_t PUPDR8 : 2;
		uint32_t PUPDR9 : 2;
		uint32_t PUPDR10 : 2;
		uint32_t PUPDR11 : 2;
		uint32_t PUPDR12 : 2;
		uint32_t PUPDR13 : 2;
		uint32_t PUPDR14 : 2;
		uint32_t PUPDR15 : 2;
	}bits;
}__attribute__((packed)) GPIO_PUPDR_t;

typedef union
{
	uint32_t all;
	struct {
		uint32_t IDR0 : 1;
		uint32_t IDR1 : 1;
		uint32_t IDR2 : 1;
		uint32_t IDR3 : 1;
		uint32_t IDR4 : 1;
		uint32_t IDR5 : 1;
		uint32_t IDR6 : 1;
		uint32_t IDR7 : 1;
		uint32_t IDR8 : 1;
		uint32_t IDR9 : 1;
		uint32_t IDR10 : 1;
		uint32_t IDR11 : 1;
		uint32_t IDR12 : 1;
		uint32_t IDR13 : 1;
		uint32_t IDR14 : 1;
		uint32_t IDR15 : 1;
		uint32_t RESERVED : 16;
	}bits;
}__attribute__((packed)) GPIO_IDR_t;

typedef union
{
	uint32_t all;
	struct {
		uint32_t ODR0 : 1;
		uint32_t ODR1 : 1;
		uint32_t ODR2 : 1;
		uint32_t ODR3 : 1;
		uint32_t ODR4 : 1;
		uint32_t ODR5 : 1;
		uint32_t ODR6 : 1;
		uint32_t ODR7 : 1;
		uint32_t ODR8 : 1;
		uint32_t ODR9 : 1;
		uint32_t ODR10 : 1;
		uint32_t ODR11 : 1;
		uint32_t ODR12 : 1;
		uint32_t ODR13 : 1;
		uint32_t ODR14 : 1;
		uint32_t ODR15 : 1;
		uint32_t RESERVED : 16;
	}bits;
}__attribute__((packed)) GPIO_ODR_t;

typedef union
{
	uint32_t all;
	struct {
		uint32_t BS0 : 1;
		uint32_t BS1 : 1;
		uint32_t BS2 : 1;
		uint32_t BS3 : 1;
		uint32_t BS4 : 1;
		uint32_t BS5 : 1;
		uint32_t BS6 : 1;
		uint32_t BS7 : 1;
		uint32_t BS8 : 1;
		uint32_t BS9 : 1;
		uint32_t BS10 : 1;
		uint32_t BS11 : 1;
		uint32_t BS12 : 1;
		uint32_t BS13 : 1;
		uint32_t BS14 : 1;
		uint32_t BS15 : 1;
		uint32_t BR0 : 1;
		uint32_t BR1 : 1;
		uint32_t BR2 : 1;
		uint32_t BR3 : 1;
		uint32_t BR4 : 1;
		uint32_t BR5 : 1;
		uint32_t BR6 : 1;
		uint32_t BR7 : 1;
		uint32_t BR8 : 1;
		uint32_t BR9 : 1;
		uint32_t BR10 : 1;
		uint32_t BR11 : 1;
		uint32_t BR12 : 1;
		uint32_t BR13 : 1;
		uint32_t BR14 : 1;
		uint32_t BR15 : 1;
	}bits;
}__attribute__((packed))GPIO_BSRR_t;

typedef struct
{
	GPIO_MODER_t MODER;
	GPIO_OTYPER_t OTYPER;
	GPIO_OSPEEDR_t OSPEEDR;
	GPIO_PUPDR_t PUPDR;
	GPIO_IDR_t IDR;
	GPIO_ODR_t ODR;
	GPIO_BSRR_t BSRR;
	uint32_t LCKR;
	uint32_t AFR[2];
}__attribute__((packed)) GPIO_RegMap_t;

#define GPIOA				((GPIO_RegMap_t*) GPIOA_BASEADDR)
#define GPIOB				((GPIO_RegMap_t*) GPIOB_BASEADDR)
#define GPIOC				((GPIO_RegMap_t*) GPIOC_BASEADDR)

#endif /* GPIO_REG_H_ */
