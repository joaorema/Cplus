CXX = c++                                  
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98

TARGET = Materia                    
SRC = main.cpp      	\
	  AMateria.cpp  	\
	  Character.cpp 	\
	  Cure.cpp			\
	  Ice.cpp			\
	  MateriaSource.cpp \
	  Polymorph.cpp		\
	  Execute.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) $^ -o $@

clean: 
	@rm -f $(TARGET)