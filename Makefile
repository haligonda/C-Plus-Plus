# Simple Makefile for C++ Learning Examples
# Usage: make <filename_without_extension>
# Example: make strngs

CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

# Default target
.DEFAULT_GOAL := help

# Help target
help:
	@echo "C++ Learning Examples - Build System"
	@echo "===================================="
	@echo ""
	@echo "Usage: make <target>"
	@echo ""
	@echo "Available targets:"
	@echo "  strngs      - String manipulation examples"
	@echo "  arr         - Array examples"
	@echo "  functions   - Function examples with pass-by-reference"
	@echo "  increment   - Increment/decrement operations"
	@echo "  scientific  - Scientific notation"
	@echo "  assignment  - Assignment operators"
	@echo "  pointers    - Pointer examples"
	@echo "  dynamic     - Dynamic memory allocation"
	@echo "  multi       - Multi-dimensional arrays"
	@echo "  structure   - Structure examples"
	@echo "  enums       - Enumeration examples"
	@echo "  rgb         - Advanced enum examples"
	@echo "  constructor - Class constructor examples"
	@echo "  access      - Access specifier examples"
	@echo "  methods     - Class method examples"
	@echo "  protected   - Protected access examples"
	@echo "  recursion   - Recursion examples"
	@echo ""
	@echo "  all         - Build all examples"
	@echo "  clean       - Remove all compiled files"
	@echo "  run-<name>  - Build and run specific example"
	@echo ""
	@echo "Examples:"
	@echo "  make strngs       # Compile strngs.cpp"
	@echo "  make run-strngs   # Compile and run strngs.cpp"
	@echo "  make all          # Compile all examples"

# Individual targets
strngs: strngs.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

arr: arr.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

functions: functions.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

increment: increment.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

scientific: scientific_number.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

assignment: assignmnt.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

pointers: pointers.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dynamic: dynamic_allocation.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

multi: multidimenional.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

structure: structure.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

enums: enums.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

rgb: RGB.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

constructor: class_constructor.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

access: access_specifier.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

methods: class_method.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

protected: protected_access_specifier.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

recursion: recursion.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

# Run targets (build and execute)
run-strngs: strngs
	@echo "Running String Examples:"
	@echo "========================"
	./strngs

run-arr: arr
	@echo "Running Array Examples:"
	@echo "======================"
	./arr

run-functions: functions
	@echo "Running Function Examples:"
	@echo "=========================="
	./functions

run-increment: increment
	@echo "Running Increment Examples:"
	@echo "==========================="
	./increment

run-scientific: scientific
	@echo "Running Scientific Number Examples:"
	@echo "=================================="
	./scientific

run-assignment: assignment
	@echo "Running Assignment Operator Examples:"
	@echo "====================================="
	./assignment

run-pointers: pointers
	@echo "Running Pointer Examples:"
	@echo "========================"
	./pointers

run-dynamic: dynamic
	@echo "Running Dynamic Allocation Examples:"
	@echo "===================================="
	./dynamic

run-multi: multi
	@echo "Running Multi-dimensional Array Examples:"
	@echo "========================================="
	./multi

run-structure: structure
	@echo "Running Structure Examples:"
	@echo "=========================="
	./structure

run-enums: enums
	@echo "Running Enum Examples:"
	@echo "====================="
	./enums

run-rgb: rgb
	@echo "Running RGB Enum Examples:"
	@echo "========================="
	./rgb

run-constructor: constructor
	@echo "Running Constructor Examples:"
	@echo "============================"
	./constructor

run-access: access
	@echo "Running Access Specifier Examples:"
	@echo "================================="
	./access

run-methods: methods
	@echo "Running Class Method Examples:"
	@echo "============================="
	./methods

run-protected: protected
	@echo "Running Protected Access Examples:"
	@echo "================================="
	./protected

run-recursion: recursion
	@echo "Running Recursion Examples:"
	@echo "=========================="
	./recursion

# Build all examples
all: strngs arr functions increment scientific assignment pointers dynamic multi structure enums rgb constructor access methods protected recursion
	@echo "All examples compiled successfully!"

# Clean compiled files
clean:
	rm -f strngs arr functions increment scientific assignment pointers dynamic multi structure enums rgb constructor access methods protected recursion
	@echo "All compiled files removed!"

# Phony targets
.PHONY: help all clean run-strngs run-arr run-functions run-increment run-scientific run-assignment run-pointers run-dynamic run-multi run-structure run-enums run-rgb run-constructor run-access run-methods run-protected run-recursion