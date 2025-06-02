
CXX = c++                                  
CXXFLAGS = -Wall -Werror -Wextra

TARGET = megaphone                       
SRC = megaphone.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) $^ -o $@

clean: 
	@rm -f $(TARGET)