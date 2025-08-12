.DEFAULT_GOAL := release
COMPILER = g++
OBJS = $(wildcard src/*.cpp) $(wildcard src/*/*.cpp)  
APPNAME = minesweeper
BUILD_PATH = build
FLAGS= -std=c++20 -L lib/raylib/lib/ -Wall -Wno-unused-function -I lib/raylib/include 

ifeq ($(OS),Windows_NT)
LIBS = -lraylibWin64 -lopengl32 -lgdi32 -static source/icon.res
release: FLAGS += -mwindows
else
LIBS = -lraylib -lm -lpthread -ldl -lrt -lX11
endif

$(BUILD_PATH): 
	@if [ ! -d .$@ ]; then echo [Make] $@ ; fi
	@mkdir -p $@

all: release run clean 
release: | $(BUILD_PATH) ## compile the program 
	$(COMPILER) -O3 -DNDEBUG $(OBJS) $(FLAGS) $(LIBS) -o $(BUILD_PATH)/$(APPNAME)
	@echo "Build Finished!"

windows_test:
	x86_64-w64-mingw32-g++ -g $(SRC) $(FLAGS) -lraylibWin64 -lopengl32 -lgdi32 -static -o $(BUILD_PATH)/$(APPNAME)

run: ## run the binary
	@./$(BUILD_PATH)/$(APPNAME)

help: ## Show this help.
	@grep -E -h '\s##\s' $(MAKEFILE_LIST) | sort | awk 'BEGIN {FS = ":.*?## "}; {printf "%-20s %-1s\n", $$1, $$2}'

clean:
ifeq ($(OS),Windows_NT)
	@del /q $(BUILD_PATH)/$(APPNAME).exe
else
	@rm -f $(BUILD_PATH)/$(APPNAME)
endif

.PHONY: BUILD_PATH 
