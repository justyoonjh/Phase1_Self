#include "gpio_driver.h"

int main(void){
	GPIO_ClockEnable_GPIOA();

	GPIO_SetMode(PA5, GPIO_MODE_OUTPUT);

	GPIO_SetMode(PA0, GPIO_MODE_INPUT);

	GPIO_Writepin(PA5, 0);

	while(1){

		GPIO_Setpin_BSRR(PA5);
		delay_sw(1000000);

		GPIO_Resetpin_BSRR(PA5);
		delay_sw(1000000);

	}
}
