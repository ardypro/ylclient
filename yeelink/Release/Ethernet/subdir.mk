################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
/usr/share/arduino/libraries/Ethernet/Dhcp.cpp \
/usr/share/arduino/libraries/Ethernet/Dns.cpp \
/usr/share/arduino/libraries/Ethernet/Ethernet.cpp \
/usr/share/arduino/libraries/Ethernet/EthernetClient.cpp \
/usr/share/arduino/libraries/Ethernet/EthernetServer.cpp \
/usr/share/arduino/libraries/Ethernet/EthernetUdp.cpp 

OBJS += \
./Ethernet/Dhcp.o \
./Ethernet/Dns.o \
./Ethernet/Ethernet.o \
./Ethernet/EthernetClient.o \
./Ethernet/EthernetServer.o \
./Ethernet/EthernetUdp.o 

CPP_DEPS += \
./Ethernet/Dhcp.d \
./Ethernet/Dns.d \
./Ethernet/Ethernet.d \
./Ethernet/EthernetClient.d \
./Ethernet/EthernetServer.d \
./Ethernet/EthernetUdp.d 


# Each subdirectory must supply rules for building sources it contributes
Ethernet/Dhcp.o: /usr/share/arduino/libraries/Ethernet/Dhcp.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"/usr/share/arduino/hardware/arduino/cores/arduino" -I"/usr/share/arduino/hardware/arduino/variants/standard" -I"/home/ardypro/文档/projects/ylclient/yeelink" -I"/usr/share/arduino/libraries/Ethernet" -I"/usr/share/arduino/libraries/SPI" -D__IN_ECLIPSE__=1 -DUSB_VID= -DUSB_PID= -DARDUINO=100 -Wall -Os -ffunction-sections -fdata-sections -fno-exceptions -g -mmcu=atmega328p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)"  -c -o "$@" -x c++ "$<"
	@echo 'Finished building: $<'
	@echo ' '

Ethernet/Dns.o: /usr/share/arduino/libraries/Ethernet/Dns.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"/usr/share/arduino/hardware/arduino/cores/arduino" -I"/usr/share/arduino/hardware/arduino/variants/standard" -I"/home/ardypro/文档/projects/ylclient/yeelink" -I"/usr/share/arduino/libraries/Ethernet" -I"/usr/share/arduino/libraries/SPI" -D__IN_ECLIPSE__=1 -DUSB_VID= -DUSB_PID= -DARDUINO=100 -Wall -Os -ffunction-sections -fdata-sections -fno-exceptions -g -mmcu=atmega328p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)"  -c -o "$@" -x c++ "$<"
	@echo 'Finished building: $<'
	@echo ' '

Ethernet/Ethernet.o: /usr/share/arduino/libraries/Ethernet/Ethernet.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"/usr/share/arduino/hardware/arduino/cores/arduino" -I"/usr/share/arduino/hardware/arduino/variants/standard" -I"/home/ardypro/文档/projects/ylclient/yeelink" -I"/usr/share/arduino/libraries/Ethernet" -I"/usr/share/arduino/libraries/SPI" -D__IN_ECLIPSE__=1 -DUSB_VID= -DUSB_PID= -DARDUINO=100 -Wall -Os -ffunction-sections -fdata-sections -fno-exceptions -g -mmcu=atmega328p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)"  -c -o "$@" -x c++ "$<"
	@echo 'Finished building: $<'
	@echo ' '

Ethernet/EthernetClient.o: /usr/share/arduino/libraries/Ethernet/EthernetClient.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"/usr/share/arduino/hardware/arduino/cores/arduino" -I"/usr/share/arduino/hardware/arduino/variants/standard" -I"/home/ardypro/文档/projects/ylclient/yeelink" -I"/usr/share/arduino/libraries/Ethernet" -I"/usr/share/arduino/libraries/SPI" -D__IN_ECLIPSE__=1 -DUSB_VID= -DUSB_PID= -DARDUINO=100 -Wall -Os -ffunction-sections -fdata-sections -fno-exceptions -g -mmcu=atmega328p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)"  -c -o "$@" -x c++ "$<"
	@echo 'Finished building: $<'
	@echo ' '

Ethernet/EthernetServer.o: /usr/share/arduino/libraries/Ethernet/EthernetServer.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"/usr/share/arduino/hardware/arduino/cores/arduino" -I"/usr/share/arduino/hardware/arduino/variants/standard" -I"/home/ardypro/文档/projects/ylclient/yeelink" -I"/usr/share/arduino/libraries/Ethernet" -I"/usr/share/arduino/libraries/SPI" -D__IN_ECLIPSE__=1 -DUSB_VID= -DUSB_PID= -DARDUINO=100 -Wall -Os -ffunction-sections -fdata-sections -fno-exceptions -g -mmcu=atmega328p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)"  -c -o "$@" -x c++ "$<"
	@echo 'Finished building: $<'
	@echo ' '

Ethernet/EthernetUdp.o: /usr/share/arduino/libraries/Ethernet/EthernetUdp.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"/usr/share/arduino/hardware/arduino/cores/arduino" -I"/usr/share/arduino/hardware/arduino/variants/standard" -I"/home/ardypro/文档/projects/ylclient/yeelink" -I"/usr/share/arduino/libraries/Ethernet" -I"/usr/share/arduino/libraries/SPI" -D__IN_ECLIPSE__=1 -DUSB_VID= -DUSB_PID= -DARDUINO=100 -Wall -Os -ffunction-sections -fdata-sections -fno-exceptions -g -mmcu=atmega328p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)"  -c -o "$@" -x c++ "$<"
	@echo 'Finished building: $<'
	@echo ' '


