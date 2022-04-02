# Name of the project
PROJECT_NAME = Calculator

# Output directory
BUILD = build

# All source code files
SRC = src/add1.c\
src/sub1.c\
src/multi1.c\
src/div1.c\
src/squareroot1.c\
src/power1.c\
src/mod1.c\

# All test source files
TEST_SRC = ${SRC}\
test/calculator_test.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc\
-Iunity\

#Library Inlcudes
INCLUDE_LIBS = 

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.CALCULATOR: run clean test doc all

#all: $(SRC) $(BUILD)
#	gcc calculator.c $(SRC) $(INC) -o $(PROJECT_OUTPUT).out

all: $(SRC) $(BUILD)
	gcc calculator.c $(SRC) $(INC) -o $(PROJECT_OUTPUT).out
# Call `make run` to run the application
#run:$(PROJECT_NAME)
#	./$(PROJECT_OUTPUT).out

run: $(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out
# Document the code using Doxygen
#doc:
#	make -C ./doc/documentation.md

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT) contacts.bin

# Create new build folder if not present
$(BUILD):
	mkdir build