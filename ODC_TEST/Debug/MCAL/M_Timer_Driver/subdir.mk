################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/M_Timer_Driver/M_Timer_Driver.c 

OBJS += \
./MCAL/M_Timer_Driver/M_Timer_Driver.o 

C_DEPS += \
./MCAL/M_Timer_Driver/M_Timer_Driver.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/M_Timer_Driver/%.o: ../MCAL/M_Timer_Driver/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


