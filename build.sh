#!/bin/bash

# Set the source files
SOURCE_FILES="main.cpp dino.cpp"

# Set the output binary name
OUTPUT_BINARY="dino_game"

# Compiler and linker flags
CXX=g++
CXXFLAGS="-std=c++11 -Wall"
LDFLAGS="-lraylib -lm -lpthread -ldl -lrt -lX11"

# Compile and link the program
$CXX $CXXFLAGS $SOURCE_FILES -o $OUTPUT_BINARY $LDFLAGS

# Check if the compilation was successful
if [ $? -eq 0 ]; then
    echo "Build successful! Running the program..."
    ./dino_game
else
    echo "Build failed!"
    exit 1
fi
