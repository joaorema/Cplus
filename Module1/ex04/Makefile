CXX = c++                                  
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

TARGET = Sed                       
SRC = main.cpp   \
	  File.cpp \

all: $(TARGET)

$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) $^ -o $@

clean: 
	@rm -f $(TARGET)