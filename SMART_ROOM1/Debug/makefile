################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Room/MCAL/UART/subdir.mk
-include Room/MCAL/ICU/subdir.mk
-include Room/MCAL/DIO/subdir.mk
-include Room/MCAL/ADC/subdir.mk
-include Room/HAL/keypad/subdir.mk
-include Room/HAL/LCD/subdir.mk
-include Room/APP/main/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
SMART_ROOM1.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: SMART_ROOM1.elf secondary-outputs

# Tool invocations
SMART_ROOM1.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,SMART_ROOM1.map -mmcu=atmega32 -o "SMART_ROOM1.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

SMART_ROOM1.lss: SMART_ROOM1.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S SMART_ROOM1.elf  >"SMART_ROOM1.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: SMART_ROOM1.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 SMART_ROOM1.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) SMART_ROOM1.elf
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
