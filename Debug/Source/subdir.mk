################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Source/bala.cpp \
../Source/enemigo.cpp \
../Source/entidad.cpp \
../Source/espacio.cpp \
../Source/juego.cpp \
../Source/nave.cpp 

OBJS += \
./Source/bala.o \
./Source/enemigo.o \
./Source/entidad.o \
./Source/espacio.o \
./Source/juego.o \
./Source/nave.o 

CPP_DEPS += \
./Source/bala.d \
./Source/enemigo.d \
./Source/entidad.d \
./Source/espacio.d \
./Source/juego.d \
./Source/nave.d 


# Each subdirectory must supply rules for building sources it contributes
Source/%.o: ../Source/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/home/kaiizoku/workspace/space/Headers" -I"/home/kaiizoku/workspace/space/Others" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


