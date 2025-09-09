#pragma once
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>



#define     RED		     "\033[0;31m"
#define     GREEN		 "\033[0;32m"
#define     RESET		 "\033[0m"


class Span
{
    protected:

    private:
        unsigned int _maximum;
        std::vector<int> _values;
    
    public:
        Span();
        Span(unsigned int n);
        ~Span();

        Span(const Span& other);
        Span& operator=(const Span& other);

        int getMaximum()const;
        int getValue(int nbr)const;
        int getSize()const;

        void addNumber(int nbr);
        void addMultipleNumbers(int begin, int end);
        int shortestSpan();
        int longestSpan();

        class VectorFull : public std::exception
        {
            virtual const char* what() const throw();
        };

        class NotEnoughElements : public std::exception
        {
            virtual const char* what() const throw();
        };
        
    };
    
std::ostream& operator<<(std::ostream& os, const Span& span);