CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

TARGET = tester
SRC = Account.cpp \
      tests.cpp 

all: $(TARGET)

$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	@rm -f $(TARGET)