CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98

TARGET = fixed
SRC = main.cpp Fixed.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(TARGET)

re: fclean all