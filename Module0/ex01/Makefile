CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

TARGET = Phonebook
SRC = phonebook.cpp \
      main.cpp \
      contact.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	@rm -f $(TARGET)