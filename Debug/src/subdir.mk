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
../src/KingMoveTest.cpp \
../src/Knight.cpp \
../src/KnightMoveTest.cpp \
../src/Memento.cpp \
../src/Pawn.cpp \
../src/PawnMoveTest.cpp \
../src/Piece.cpp \
../src/Queen.cpp \
../src/QueenMoveTest.cpp \
../src/Rook.cpp \
../src/RookMove1.cpp \
../src/chess.cpp \
../src/main.cpp 

OBJS += \
./src/Bishop.o \
./src/BishopMoveTest.o \
./src/Board.o \
./src/Cell.o \
./src/Game.o \
./src/King.o \
./src/KingMoveTest.o \
./src/Knight.o \
./src/KnightMoveTest.o \
./src/Memento.o \
./src/Pawn.o \
./src/PawnMoveTest.o \
./src/Piece.o \
./src/Queen.o \
./src/QueenMoveTest.o \
./src/Rook.o \
./src/RookMove1.o \
./src/chess.o \
./src/main.o 

CPP_DEPS += \
./src/Bishop.d \
./src/BishopMoveTest.d \
./src/Board.d \
./src/Cell.d \
./src/Game.d \
./src/King.d \
./src/KingMoveTest.d \
./src/Knight.d \
./src/KnightMoveTest.d \
./src/Memento.d \
./src/Pawn.d \
./src/PawnMoveTest.d \
./src/Piece.d \
./src/Queen.d \
./src/QueenMoveTest.d \
./src/Rook.d \
./src/RookMove1.d \
./src/chess.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


