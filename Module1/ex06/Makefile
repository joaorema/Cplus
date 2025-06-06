CXX = c++                                  
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98

TARGET = harlFilter                     
SRC = main.cpp   \
	  Harl.cpp \

all: $(TARGET)

$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) $^ -o $@

clean: 
	@rm -f $(TARGET)