CXX = c++
CXXFLAGS = -Wall -Werror -Wextra

TARGET = Phonebook
SRC = phonebook.cpp \
      main.cpp \
      contact.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	@rm -f $(TARGET)