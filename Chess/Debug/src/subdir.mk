################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Board.cpp \
../src/Cell.cpp \
../src/Piece.cpp \
../src/chess.cpp 

OBJS += \
./src/Board.o \
./src/Cell.o \
./src/Piece.o \
./src/chess.o 

CPP_DEPS += \
./src/Board.d \
./src/Cell.d \
./src/Piece.d \
./src/chess.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

