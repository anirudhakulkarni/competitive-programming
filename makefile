CC = g++
# compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CPPFLAGS  = -g -Wall
TARGET = main
BUILD_DIR = ./build
OUT_DIR = ./outputs
LIB = pkg-config --cflags --libs
TESTFILE= ../input.txt
all: clean build run
clean:
	@echo Removing old build files :
	$(RM) -r $(BUILD_DIR)
build:
	@echo Building project :
	mkdir $(BUILD_DIR)
	$(CC) $(CPPFLAGS) -o $(BUILD_DIR)/$(TARGET) $(TARGET).cpp
	@echo Generated the executable without errors ...
	
run:
	@echo Running the executable ...
	cd $(BUILD_DIR); ./$(TARGET) $(TESTFILE)
CC = g++
# compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CPPFLAGS  = -g -Wall
TARGET = main
BUILD_DIR = ./build
OUT_DIR = ./outputs
LIB = pkg-config --cflags --libs
TESTFILE= ../input.txt
all: clean build run
clean:
	@echo Removing old build files :
	$(RM) -r $(BUILD_DIR)
build:
	@echo Building project :
	mkdir $(BUILD_DIR)
	$(CC) $(CPPFLAGS) -o $(BUILD_DIR)/$(TARGET) $(TARGET).cpp
	@echo Generated the executable without errors ...
	
run:
	@echo Running the executable ...
	cd $(BUILD_DIR); ./$(TARGET) $(TESTFILE)
CC = g++
# compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CPPFLAGS  = -g -Wall
TARGET = test
BUILD_DIR = ./build
OUT_DIR = ./outputs
LIB = pkg-config --cflags --libs
TESTFILE= ../input.txt
all: clean build run
clean:
	@echo Removing old build files :
	$(RM) -r $(BUILD_DIR)
build:
	@echo Building project :
	mkdir $(BUILD_DIR)
	$(CC) $(CPPFLAGS) -o $(BUILD_DIR)/$(TARGET) $(TARGET).cpp
	@echo Generated the executable without errors ...
	
run:
	@echo Running the executable ...
	cd $(BUILD_DIR); ./$(TARGET)
