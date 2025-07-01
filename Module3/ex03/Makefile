CXX = c++                                  
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98 -Wno-shadow  -Wshadow

TARGET = Fragtrap                    
SRC = main.cpp   	\
	  ClapTrap.cpp  \
	  ScavTrap.cpp  \
	  Fragtrap.cpp	\
	  Diamontrap.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) $^ -o $@

clean: 
	@rm -f $(TARGET)