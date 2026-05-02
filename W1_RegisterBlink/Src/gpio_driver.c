#include "gpio_driver.h"

void GPIO_ClockEnable_GPIOA(void){
	RCC_AHB1ENR |= (1 << 0);
}

void GPIO_SetMode(uint8_t pin, uint32_t mode){
	GPIOA_MODER &= ~(0x3 << (pin * 2));
	GPIOA_MODER |= (mode << (pin * 2));
}

void GPIO_Setpin_BSRR(uint8_t pin){
	GPIOA_BSRR = (1 << pin);
}

void GPIO_Resetpin_BSRR(uint8_t pin){
	GPIOA_BSRR = (1 << (pin + 16));
}

void GPIO_Writepin(uint8_t pin, uint8_t state){
	if (state)
		GPIOA_ODR |= (1 << pin);
	else
		GPIOA_ODR &= ~(1 << pin);
}

void GPIO_Togglepin(uint8_t pin){
	GPIOA_ODR ^= (1 << pin);
}

uint8_t GPIO_Readpin(uint8_t pin) {
	return (uint8_t)((GPIOA_IDR >> pin) & 0x1);
}

void delay_sw (volatile uint32_t count){
	while(count--);
}
