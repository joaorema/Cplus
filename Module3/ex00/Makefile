CXX = c++                                  
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98

TARGET = claptrap                    
SRC = main.cpp   \
	  ClapTrap.cpp  \

all: $(TARGET)

$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) $^ -o $@

clean: 
	@rm -f $(TARGET)