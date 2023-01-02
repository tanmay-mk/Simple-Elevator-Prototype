################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/Src/cbfifo.c \
../Application/Src/elevator.c 

OBJS += \
./Application/Src/cbfifo.o \
./Application/Src/elevator.o 

C_DEPS += \
./Application/Src/cbfifo.d \
./Application/Src/elevator.d 


# Each subdirectory must supply rules for building sources it contributes
Application/Src/%.o Application/Src/%.su: ../Application/Src/%.c Application/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/tanma/OneDrive/Desktop/CubeIDEWorkspace/ElevatorPrototype-F401RE/Application/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Application-2f-Src

clean-Application-2f-Src:
	-$(RM) ./Application/Src/cbfifo.d ./Application/Src/cbfifo.o ./Application/Src/cbfifo.su ./Application/Src/elevator.d ./Application/Src/elevator.o ./Application/Src/elevator.su

.PHONY: clean-Application-2f-Src

