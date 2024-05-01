# Compiler
CC := g++

# Compiler flags
CFLAGS := -Wall -Wextra -std=c++11

# Source files
SRCS := main.cpp algebra.cpp fourfunction.cpp advancedfunction.cpp

# Object files
OBJS := $(SRCS:.cpp=.o)

# Target executable
TARGET := main

# Default target
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Rule to compile source files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)