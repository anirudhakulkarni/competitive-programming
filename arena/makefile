CC = g++
# compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CPPFLAGS  = -g -Wall

BUILD_DIR = ./build
OUT_DIR = ./outputs
LIB = pkg-config --cflags --libs
TESTFILE= ../input.txt
clean:
	@echo Removing old build files :
	$(RM) -r $(BUILD_DIR)

all: build run
build:
	@echo Building project :
	$(CC) $(CPPFLAGS) -o $(F) $(F).cpp
	@echo Generated the executable without errors ...
	
run:
	@echo Running the executable ...
	./$(F)
