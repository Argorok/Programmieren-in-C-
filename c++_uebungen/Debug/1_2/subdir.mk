################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../1_2/aufgabe_2.cpp \
../1_2/aufgabe_3.cpp \
../1_2/helloworld.cpp 

OBJS += \
./1_2/aufgabe_2.o \
./1_2/aufgabe_3.o \
./1_2/helloworld.o 

CPP_DEPS += \
./1_2/aufgabe_2.d \
./1_2/aufgabe_3.d \
./1_2/helloworld.d 


# Each subdirectory must supply rules for building sources it contributes
1_2/%.o: ../1_2/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


