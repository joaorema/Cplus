CXX = c++                                  
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98

TARGET = Animals                    
SRC = main.cpp      \
	  Cat.cpp  		\
	  Dog.cpp		\
	  Animal.cpp	\
	  WrongAnimal.cpp \
	  WrongCat.cpp	\
	  Brain.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) $^ -o $@

clean: 
	@rm -f $(TARGET)