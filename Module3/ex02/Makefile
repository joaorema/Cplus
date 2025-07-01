CXX = c++                                  
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98

TARGET = Fragtrap                    
SRC = main.cpp   	\
	  ClapTrap.cpp  \
	  ScavTrap.cpp  \
	  Fragtrap.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) $^ -o $@

clean: 
	@rm -f $(TARGET)