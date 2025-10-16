################################################################################
#                                     CONFIG                                   #
################################################################################
CXX = c++                                  
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98

TARGET = MutantStack              
SRC = main.cpp	
	
################################################################################
#                                  RULES                                       #
################################################################################

all: $(TARGET)

$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) $^ -o $@

clean: 
	@rm -f $(TARGET)

fclean: clean
	@rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re