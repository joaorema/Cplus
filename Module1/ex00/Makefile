CXX = c++                                  
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

TARGET = Zombie                       
SRC = main.cpp   \
	  Zombie.cpp \
	  randomChump.cpp \
	  newZombie.cpp \

all: $(TARGET)

$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) $^ -o $@

clean: 
	@rm -f $(TARGET)