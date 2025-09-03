#pragma once
#include <cctype>
#include <cmath>
#include <iomanip>
#include <string>
#include <sstream>
#include <limits>
#include <iostream>

class ScalarConverter
{
    private:
        ScalarConverter();
        ~ScalarConverter();

        ScalarConverter(const ScalarConverter &other);
        ScalarConverter& operator=(const ScalarConverter& other);

    protected:

    public:

        static void convert(const std::string& literal);
        

};