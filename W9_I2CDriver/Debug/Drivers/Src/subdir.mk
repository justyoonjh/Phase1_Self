################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/Src/gpio_driver.c \
../Drivers/Src/rcc_driver.c \
../Drivers/Src/systick.c \
../Drivers/Src/usart_driver.c 

OBJS += \
./Drivers/Src/gpio_driver.o \
./Drivers/Src/rcc_driver.o \
./Drivers/Src/systick.o \
./Drivers/Src/usart_driver.o 

C_DEPS += \
./Drivers/Src/gpio_driver.d \
./Drivers/Src/rcc_driver.d \
./Drivers/Src/systick.d \
./Drivers/Src/usart_driver.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/Src/%.o Drivers/Src/%.su Drivers/Src/%.cyclo: ../Drivers/Src/%.c Drivers/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -c -I../Inc -I"/home/justjhst/바탕화면/Phase1_Self/W9_I2CDriver/BSP" -I"/home/justjhst/바탕화면/Phase1_Self/W9_I2CDriver/Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-Src

clean-Drivers-2f-Src:
	-$(RM) ./Drivers/Src/gpio_driver.cyclo ./Drivers/Src/gpio_driver.d ./Drivers/Src/gpio_driver.o ./Drivers/Src/gpio_driver.su ./Drivers/Src/rcc_driver.cyclo ./Drivers/Src/rcc_driver.d ./Drivers/Src/rcc_driver.o ./Drivers/Src/rcc_driver.su ./Drivers/Src/systick.cyclo ./Drivers/Src/systick.d ./Drivers/Src/systick.o ./Drivers/Src/systick.su ./Drivers/Src/usart_driver.cyclo ./Drivers/Src/usart_driver.d ./Drivers/Src/usart_driver.o ./Drivers/Src/usart_driver.su

.PHONY: clean-Drivers-2f-Src

