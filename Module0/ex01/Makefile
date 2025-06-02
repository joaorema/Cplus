CXX = c++                                  
CXXFLAGS = -Wall -Werror -Wextra

TARGET = Phonebook                     
SRC = phonebook.cpp \
      phonebook.hpp \
	  main.cpp		\
	  contact.cpp   \
	  contact.hpp

all: $(TARGET)

$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) $^ -o $@

clean: 
	@rm -f $(TARGET)