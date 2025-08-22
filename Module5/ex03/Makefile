################################################################################
#                                     CONFIG                                   #
################################################################################
CXX = c++                                  
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98

TARGET = intern                 
SRC = main.cpp       				\
	  Bureaucrat.cpp 				\
	  AForm.cpp						\
	  PresidentialPardonForm.cpp 	\
	  RobotomyRequestForm.cpp		\
	  ShrubberyCreationForm.cpp		\
	  Intern.cpp

################################################################################
#                                  RULES                                       #
################################################################################

all: $(TARGET)

$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) $^ -o $@

clean: 
	@rm -f $(TARGET)

.PHONY: all clean
