#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    
}

ScalarConverter::~ScalarConverter()
{
   
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    (void)other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    (void)other;
    return *this;
}

void ScalarConverter::convert(const std::string& literal)
{
    std::istringstream  text(literal);     //will take literal and put it in istringstream
    double              val;
    std::string         left;
    std::string         check = text.str();
    bool                valid_double;
    
    if(text >> val) //we try to pass the istringstream to double  //this first if will try to print Char: (either valid or invalid input)
    {
        text >> left; //try to extract rest into left
                                                                                                   //parsing
        if((left.length() != 0 && left != "f") || (left == "f" && check.find('.') == check.npos))  //first check: if len != 0 and the rest is not "f" 
        {                                                                                          //second check: if we have f but no "." to represent float
            std::cout << "Invalid Input" << std::endl;
            return ;
        }                                                                                               
        if(val >= 0 && val <= 127 && val == static_cast<int>(val))                                   //if in ascii table 
        {
            if(isprint(static_cast<char>(val)))                                                     //if we have a letter corresponding to that nbr we display (exemple 98 = b)
                std::cout << "Char: " << static_cast<char>(val) << "" << std::endl; 
            else                                                                                    //if dont have a char to represent (from 0 to 32 in ascii table)
                std::cout << "Char: Can't be displayed" << std::endl;
        }
        else
            std::cout << "Char: Impossible" << std::endl;
            //this if will print the Int: (either valid or invalid)
        if(val >= std::numeric_limits<int>::min() && val <= std::numeric_limits<int>::max())   //if the cast to int is between int_min e int_max (valid int)
            std::cout << "int: " << static_cast<int>(val) << std::endl;                        //print static_Cast<int>
        else
            std::cout << "int: Impossible" << std::endl;                                        //else value is to big or small 
            
            //this will print the Float and double: (if valid)
        valid_double = static_cast<double>(val);
        if(valid_double)                                                                                //if not 0
        {                                                                                               //setprecision also rounds up (25.6767) = 26
            std::cout << "float: " << std::fixed << std::setprecision(0) << val << ".0f" << std::endl; //setprecision shows 0 digits after the decimal point then we add the extra .0f
            std::cout << "double " << std::fixed << std::setprecision(0) << val << ".0" << std::endl;  //setprecision shows 0 digits after the decimal point then we add the extra .0
        }
        else    //just for the 0 case
        {
            std::cout << "float: " << val << ".0f" << std::endl;
            std::cout << "double: " << val << std::endl;
        }
        
    }
    //since we cant >> to val
    else if(literal == "nan" || literal == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if(literal == "-inf" || literal == "-inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;   
    }
    else if(literal == "+inf" || literal == "+inff" || literal == "inf" || literal == "inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
    }
    else
    {
        std::cout << "Invalid input try again" << std::endl;
    }


    
    
}

