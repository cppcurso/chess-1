################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Board.cpp \
../src/Cell.cpp \
<<<<<<< HEAD
../src/King.cpp \
../src/Piece.cpp \
../src/Queen.cpp \
=======
../src/Pawn.cpp \
../src/Piece.cpp \
../src/Rook.cpp \
>>>>>>> 3434bd9c13ea0032a945a33583e0d08ebe2c5d45
../src/chess.cpp 

OBJS += \
./src/Board.o \
./src/Cell.o \
<<<<<<< HEAD
./src/King.o \
./src/Piece.o \
./src/Queen.o \
=======
./src/Pawn.o \
./src/Piece.o \
./src/Rook.o \
>>>>>>> 3434bd9c13ea0032a945a33583e0d08ebe2c5d45
./src/chess.o 

CPP_DEPS += \
./src/Board.d \
./src/Cell.d \
<<<<<<< HEAD
./src/King.d \
./src/Piece.d \
./src/Queen.d \
=======
./src/Pawn.d \
./src/Piece.d \
./src/Rook.d \
>>>>>>> 3434bd9c13ea0032a945a33583e0d08ebe2c5d45
./src/chess.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


