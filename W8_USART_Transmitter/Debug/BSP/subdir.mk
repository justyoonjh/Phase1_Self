################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../BSP/keypad_driver.c 

OBJS += \
./BSP/keypad_driver.o 

C_DEPS += \
./BSP/keypad_driver.d 


# Each subdirectory must supply rules for building sources it contributes
BSP/%.o BSP/%.su BSP/%.cyclo: ../BSP/%.c BSP/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -I"/home/justjhst/바탕화면/Phase1_Self/W8_USART_Transmitter/Drivers" -I"/home/justjhst/바탕화면/Phase1_Self/W8_USART_Transmitter/BSP" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-BSP

clean-BSP:
	-$(RM) ./BSP/keypad_driver.cyclo ./BSP/keypad_driver.d ./BSP/keypad_driver.o ./BSP/keypad_driver.su

.PHONY: clean-BSP

