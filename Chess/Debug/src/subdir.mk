################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Bishop.cpp \
../src/BishopMoveTest.cpp \
../src/Board.cpp \
../src/Cell.cpp \
../src/Game.cpp \
../src/King.cpp \
../src/Knight.cpp \
../src/Pawn.cpp \
../src/Piece.cpp \
../src/Queen.cpp \
../src/Rook.cpp \
../src/chess.cpp \
../src/main.cpp 

OBJS += \
./src/Bishop.o \
./src/BishopMoveTest.o \
./src/Board.o \
./src/Cell.o \
./src/Game.o \
./src/King.o \
./src/Knight.o \
./src/Pawn.o \
./src/Piece.o \
./src/Queen.o \
./src/Rook.o \
./src/chess.o \
./src/main.o 

CPP_DEPS += \
./src/Bishop.d \
./src/BishopMoveTest.d \
./src/Board.d \
./src/Cell.d \
./src/Game.d \
./src/King.d \
./src/Knight.d \
./src/Pawn.d \
./src/Piece.d \
./src/Queen.d \
./src/Rook.d \
./src/chess.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/usuario/clase/chess-1/Chess/src" -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


