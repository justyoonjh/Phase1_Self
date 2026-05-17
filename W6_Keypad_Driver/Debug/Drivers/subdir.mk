################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/gpio_driver.c \
../Drivers/keypad_driver.c 

OBJS += \
./Drivers/gpio_driver.o \
./Drivers/keypad_driver.o 

C_DEPS += \
./Drivers/gpio_driver.d \
./Drivers/keypad_driver.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/%.o Drivers/%.su Drivers/%.cyclo: ../Drivers/%.c Drivers/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -I"/home/justjhst/바탕화면/Phase1_Self/W6_Keypad_Driver/Drivers" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers

clean-Drivers:
	-$(RM) ./Drivers/gpio_driver.cyclo ./Drivers/gpio_driver.d ./Drivers/gpio_driver.o ./Drivers/gpio_driver.su ./Drivers/keypad_driver.cyclo ./Drivers/keypad_driver.d ./Drivers/keypad_driver.o ./Drivers/keypad_driver.su

.PHONY: clean-Drivers

