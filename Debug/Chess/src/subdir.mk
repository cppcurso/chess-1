################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Chess/src/Bishop.cpp \
../Chess/src/BishopMoveTest.cpp \
../Chess/src/Board.cpp \
../Chess/src/Cell.cpp \
../Chess/src/Game.cpp \
../Chess/src/King.cpp \
../Chess/src/Knight.cpp \
../Chess/src/Pawn.cpp \
../Chess/src/PawnMoveTest.cpp \
../Chess/src/Piece.cpp \
../Chess/src/Queen.cpp \
../Chess/src/Rook.cpp \
../Chess/src/chess.cpp \
../Chess/src/main.cpp 

OBJS += \
./Chess/src/Bishop.o \
./Chess/src/BishopMoveTest.o \
./Chess/src/Board.o \
./Chess/src/Cell.o \
./Chess/src/Game.o \
./Chess/src/King.o \
./Chess/src/Knight.o \
./Chess/src/Pawn.o \
./Chess/src/PawnMoveTest.o \
./Chess/src/Piece.o \
./Chess/src/Queen.o \
./Chess/src/Rook.o \
./Chess/src/chess.o \
./Chess/src/main.o 

CPP_DEPS += \
./Chess/src/Bishop.d \
./Chess/src/BishopMoveTest.d \
./Chess/src/Board.d \
./Chess/src/Cell.d \
./Chess/src/Game.d \
./Chess/src/King.d \
./Chess/src/Knight.d \
./Chess/src/Pawn.d \
./Chess/src/PawnMoveTest.d \
./Chess/src/Piece.d \
./Chess/src/Queen.d \
./Chess/src/Rook.d \
./Chess/src/chess.d \
./Chess/src/main.d 


# Each subdirectory must supply rules for building sources it contributes
Chess/src/%.o: ../Chess/src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/usuario/workspace/chess-1/Chess/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


