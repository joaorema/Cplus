CXX = c++                                  
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

TARGET = Harl                     
SRC = main.cpp   \
	  Harl.cpp \

all: $(TARGET)

$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) $^ -o $@

clean: 
	@rm -f $(TARGET)