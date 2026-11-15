CXX = g++
CPPFLAGS = -MP -MD
CXXFLAGS = -Wall
TARGET = bin
SRCS = $(wildcard *.cpp)
BUILD_DIR = build
OBJS = $(SRCS:%.cpp=$(BUILD_DIR)/%.o)
DEPS = $(SRCS:%.cpp=$(BUILD_DIR)/%.d)

.PHONY: all run clean

all: $(TARGET)

$(OBJS): | $(BUILD_DIR)

$(BUILD_DIR):
	mkdir -p $@

$(TARGET): $(OBJS)
	$(CXX) $^ -o $@

$(BUILD_DIR)/%.o: %.cpp
	$(CXX) $(CPPFLAGS) -MF $(BUILD_DIR)/$*.d $(CXXFLAGS) -c $< -o $@

run:
	./$(TARGET)

clean:
	rm -rf $(BUILD_DIR) $(TARGET)

-include $(DEPS)
