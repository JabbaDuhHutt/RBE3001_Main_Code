################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ADC.c \
../USART.c \
../globals.c \
../isrs.c \
../main.c \
../pot.c \
../timer.c 

OBJS += \
./ADC.o \
./USART.o \
./globals.o \
./isrs.o \
./main.o \
./pot.o \
./timer.o 

C_DEPS += \
./ADC.d \
./USART.d \
./globals.d \
./isrs.d \
./main.d \
./pot.d \
./timer.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\Michael\Documents\GitHub\RBE3001_A15_Team15\RBELib\include" -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega644p -DF_CPU=18432000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


