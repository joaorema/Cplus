CXX = c++                                  
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

TARGET = Weapon                       
SRC = main.cpp   \
	  HumanA.cpp \
	  HumanB.cpp \
	  Weapon.cpp \
	  			  

all: $(TARGET)

$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) $^ -o $@

clean: 
	@rm -f $(TARGET)