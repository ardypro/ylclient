################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../GenericEthernet.cpp \
../SerialHTTP.cpp \
../yeelink.cpp \
../ylclient.cpp 

OBJS += \
./GenericEthernet.o \
./SerialHTTP.o \
./yeelink.o \
./ylclient.o 

CPP_DEPS += \
./GenericEthernet.d \
./SerialHTTP.d \
./yeelink.d \
./ylclient.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"/usr/share/arduino/hardware/arduino/cores/arduino" -I"/usr/share/arduino/hardware/arduino/variants/standard" -I"/home/ardypro/文档/projects/ylclient/yeelink" -D__IN_ECLIPSE__=1 -DUSB_VID= -DUSB_PID= -DARDUINO=100 -Wall -Os -ffunction-sections -fdata-sections -fno-exceptions -g -mmcu=atmega328p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)"  -c -o "$@" -x c++ "$<"
	@echo 'Finished building: $<'
	@echo ' '


