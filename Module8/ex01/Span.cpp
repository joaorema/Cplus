#include "Span.hpp"

Span::Span() : _maximum(0) 
{
    //std::cout << "Constructor called for span" << std::endl;
}

Span::Span(unsigned int n) : _maximum(n)
{
    //std::cout << "Constructor called with maximum " << n << std::endl;
}

Span::~Span()
{
    //std::cout << "Destructor called" << std::endl;
}

Span::Span(const Span& other)
{
    _maximum = other._maximum;
    _values = other._values;
}

Span& Span::operator=(const Span& other)
{
    if(this != &other)
    {
        this->_maximum = other._maximum;
        this->_values = other._values;
    }
    return *this;
}

void Span::addNumber(int nbr)
{
    if(_values.size() < _maximum)
    {
        _values.push_back(nbr);
    }
    else
    {
        std::cout << RED"Vector is alredy at capacity"RESET << std::endl;
        return;
    }
}

void Span::addMultipleNumbers(int begin, int end)
{
    for(int i = begin; i < end; i++)
    {
        if(_values.size() >= _maximum)
            throw VectorFull();
        
        _values.push_back(i);
    
    }
}

int Span::getMaximum()const
{
    return _maximum;
}

int Span::getValue(int nbr)const
{
    return _values[nbr];
}

int Span::getSize()const
{
    return _values.size();
}

int Span::shortestSpan()
{
    if(_values.size() < 2)                      //if less the 2 values 
        throw NotEnoughElements();
    std::vector<int> temp = _values;            //create temp vector
    std::sort(temp.begin(), temp.end());        //sort vector
    int min = temp[1] - temp[0] ;               //min will be the next nbr - previous one
    for(unsigned int i = 0; i < temp.size() - 1; i++)
    {
        int currmin = temp[i + 1] - temp[i];
        if(currmin < min)
            min = currmin;
    }
    return min;

}


int Span::longestSpan()
{
    if(_values.size() < 2)
        throw NotEnoughElements();
    std::vector<int> temp = _values;
    std::sort(temp.begin(), temp.end());
    int max = temp[_values.size()- 1] - temp[0];
    return max;
}




const char* Span::VectorFull::what() const throw()
{
    return (RED"Vector is full"RESET);
}

const char* Span::NotEnoughElements::what() const throw()
{
    return (RED"Vector has less than 2 values!"RESET);
}


std::ostream& operator<<(std::ostream& os, const Span& span)
{
    os << "[";

    for (int i = 0; i < span.getSize(); ++i)
    {
        os << span.getValue(i) << " ";
    }
    os << "]";
    return os;
}
