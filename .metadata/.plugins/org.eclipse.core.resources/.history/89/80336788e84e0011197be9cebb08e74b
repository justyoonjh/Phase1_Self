#ifndef GPIO_DRIVER_H_
#define GPIO_DRIVER_H_

#include "gpio_reg.h"

typedef enum {
	GPIO_PIN_NO_0 = 0,
	GPIO_PIN_NO_1,
	GPIO_PIN_NO_2,
	GPIO_PIN_NO_3,
	GPIO_PIN_NO_4,
	GPIO_PIN_NO_5,
	GPIO_PIN_NO_6,
	GPIO_PIN_NO_7,
	GPIO_PIN_NO_8,
	GPIO_PIN_NO_9,
	GPIO_PIN_NO_10,
	GPIO_PIN_NO_11,
	GPIO_PIN_NO_12,
	GPIO_PIN_NO_13,
	GPIO_PIN_NO_14,
	GPIO_PIN_NO_15
}GPIO_PinNumber_t;

typedef enum {
	GPIO_MODE_INPUT = 0,
	GPIO_MODE_OUTPUT = 1,
	GPIO_MODE_ALT = 2,
	GPIO_MODE_ANALOG = 3
}GPIO_PinMode_t;

typedef enum {
	GPIO_OPTYPE_PP = 0,
	GPIO_OPTYPE_OD = 1
}GPIO_PinOPType_t;

typedef enum {
	GPIO_SPEED_LOW = 0,
	GPIO_SPEED_MEDIUM = 1,
	GPIO_SPEED_FAST = 2,
	GPIO_SPEED_HIGH = 3
}GPIO_PinSpeed_t;

typedef enum {
	GPIO_NO_PUPD = 0,
	GPIO_PU = 1,
	GPIO_PD = 2
}GPIO_PinPuPd_t;

typedef enum {
	GPIO_PIN_RESET = 0,
	GPIO_PIN_SET = 1
}GPIO_PinState_t;

typedef struct
{
	GPIO_PinNumber_t GPIO_PinNumber;
	GPIO_PinMode_t GPIO_PinMode;
	GPIO_PinSpeed_t GPIO_PinSpeed;
	GPIO_PinPuPd_t GPIO_PinPuPdControl;
	GPIO_PinOPType_t GPIO_PinOPType;
	uint8_t GPIO_PinAltFunMode;
}GPIO_PinConfig_t;

typedef struct
{
	GPIO_RegMap_t *pGPIOx;
	GPIO_PinConfig_t GPIO_PinConfig;
}GPIO_Handle_t;

#define GPIOA_CLK_EN() (RCC_AHB1ENR |= (1 << 0))
#define GPIOB_CLK_EN() (RCC_AHB1ENR |= (1 << 1))
#define GPIOC_CLK_EN() (RCC_AHB1ENR |= (1 << 2))
#define GPIOD_CLK_EN() (RCC_AHB1ENR |= (1 << 3))
#define GPIOE_CLK_EN() (RCC_AHB1ENR |= (1 << 4))
#define GPIOF_CLK_EN() (RCC_AHB1ENR |= (1 << 5))
#define GPIOG_CLK_EN() (RCC_AHB1ENR |= (1 << 6))
#define GPIOH_CLK_EN() (RCC_AHB1ENR |= (1 << 7))

#define GPIOA_CLK_DI() (RCC_AHB1ENR &= ~(1 << 0))
#define GPIOB_CLK_DI() (RCC_AHB1ENR &= ~(1 << 1))
#define GPIOC_CLK_DI() (RCC_AHB1ENR &= ~(1 << 2))
#define GPIOD_CLK_DI() (RCC_AHB1ENR &= ~(1 << 3))
#define GPIOE_CLK_DI() (RCC_AHB1ENR &= ~(1 << 4))
#define GPIOF_CLK_DI() (RCC_AHB1ENR &= ~(1 << 5))
#define GPIOG_CLK_DI() (RCC_AHB1ENR &= ~(1 << 6))
#define GPIOH_CLK_DI() (RCC_AHB1ENR &= ~(1 << 7))

void GPIO_PeriClockControl(GPIO_RegMap_t *pGPIOx, uint8_t EnorDi);
void GPIO_Init(GPIO_Handle_t *pGPIOHandle);
uint8_t GPIO_ReadFromInputPin(GPIO_RegMap_t *pGPIOx, uint8_t PinNumber);
void GPIO_WriteToOutPutPin(GPIO_RegMap_t *pGPIOx, uint8_t PinNumber, uint8_t Value);
void GPIO_ToggleOutputPin(GPIO_RegMap_t *pGPIOx, uint8_t PinNumber);


#endif
