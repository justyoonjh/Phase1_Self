#include "keypad_driver.h"
#include "systick.h"

static const uint8_t ROW_PINS[4] = {
		GPIO_PIN_NO_0,
		GPIO_PIN_NO_1,
		GPIO_PIN_NO_2,
		GPIO_PIN_NO_10,
};

static const uint8_t COL_PINS[4] = {
		GPIO_PIN_NO_4,
		GPIO_PIN_NO_5,
		GPIO_PIN_NO_6,
		GPIO_PIN_NO_7,
};

static const char KEY_MAP[4][4] = {
		{'1', '2', '3', 'A'},
		{'4', '5', '6', 'B'},
		{'7', '8', '9', 'C'},
		{'*', '0', '#', 'D'}
};

static void delay_ms(uint32_t ms)
{
	uint32_t start = GetTick();
	while((GetTick() - start) < ms);
}

void Keypad_Init(void)
{
	GPIO_PeriClockControl(GPIOB, 1);

	GPIO_Handle_t Gpiokp;
	Gpiokp.pGPIOx = GPIOB;

	Gpiokp.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUTPUT;
	Gpiokp.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
	Gpiokp.GPIO_PinConfig.GPIO_PinOPType = GPIO_OPTYPE_PP;
	Gpiokp.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
	Gpiokp.GPIO_PinConfig.GPIO_PinAltFunMode = 0;

	for (int i = 0; i < 4 ; i++)
	{
		Gpiokp.GPIO_PinConfig.GPIO_PinNumber = ROW_PINS[i];
		GPIO_Init(&Gpiokp);

		GPIO_WriteToOutputPin(GPIOB, ROW_PINS[i], GPIO_PIN_SET);
	}

	Gpiokp.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_INPUT;
	Gpiokp.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
	Gpiokp.GPIO_PinConfig.GPIO_PinOPType = GPIO_OPTYPE_PP;
	Gpiokp.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_PU;
	Gpiokp.GPIO_PinConfig.GPIO_PinAltFunMode = 0;

	for (int i = 0; i < 4 ; i++)
	{
		Gpiokp.GPIO_PinConfig.GPIO_PinNumber = COL_PINS[i];
		GPIO_Init(&Gpiokp);
	}

}
char Keypad_Getkey(void)
{
	for (int row = 0; row < 4 ; row++)
	{
		GPIO_WriteToOutputPin(GPIOB, ROW_PINS[row], GPIO_PIN_RESET);

		for (int col = 0; col < 4; col++)
		{
			if (GPIO_ReadFromInputPin(GPIOB, COL_PINS[col]) == 0)
			{
				delay_ms(20);
				if (GPIO_ReadFromInputPin(GPIOB, COL_PINS[col]) != 0)
				{
					GPIO_WriteToOutputPin(GPIOB, ROW_PINS[row], GPIO_PIN_SET);
					return 0;
				}

				GPIO_WriteToOutputPin(GPIOB, ROW_PINS[row], GPIO_PIN_SET);

				while (GPIO_ReadFromInputPin(GPIOB, COL_PINS[col]) == 0);
				delay_ms(20);

				return KEY_MAP[row][col];
			}
		}

		GPIO_WriteToOutputPin(GPIOB, ROW_PINS[row], GPIO_PIN_SET);
	}

	return 0;
}
