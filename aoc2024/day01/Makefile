# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -g -std=c++20

# Output directories
BUILD_DIR = build
BIN_DIR = $(BUILD_DIR)

# Output executable
TARGET = $(BIN_DIR)/output

# Source files
SRCS = main.cpp

# Object files (generated from source files)
OBJS = $(SRCS:src/%.cpp=$(BUILD_DIR)/%.o)

# Default target
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

# Rule to compile source files into object files
$(BUILD_DIR)/%.o: src/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build artifacts
clean:
	rm -rf $(BUILD_DIR)

# Phony targets (to prevent conflicts with files named "all" or "clean")
.PHONY: all clean
