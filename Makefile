CXX = g++
CPPFLAGS = -MP -MD
CXXFLAGS = -Wall
TARGET = bin
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)
DEPS = $(SRCS:.cpp=.d)

.PHONY: all build run clean

all: build

build: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $^ -o $@

%.o: %.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

run:
	./$(TARGET)

clean:
	rm -f $(TARGET) $(OBJS) $(DEPS)

-include $(DEPS)
