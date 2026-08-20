CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

SRC := $(shell find . -name "ex*.cpp")
BIN := $(patsubst ./%.cpp,bin/%,$(SRC))

.PHONY: all run clean

all: $(BIN)

bin/%: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $< -o $@

run: bin/$(EX)
	@./bin/$(EX)

clean:
	rm -rf bin