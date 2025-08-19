#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    //std::cout << "Normal constructor called" << std::endl
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
    try
    {
        int gr = grade;
        if(gr >= 1 && gr <= 150)
        {
            //std::cout << "Grade is valid!" << std::endl;
            _grade = grade;
        }
        else
        {
            throw(gr);
        }
    }
    catch(int grade)
    {
        std::cout << "Invalid Grade" << std::endl;
        _grade = 0;
    }
    //std::cout << _name << " bureaucrat grade : " << grade << std::endl;

}

Bureaucrat::~Bureaucrat()
{
    //std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
    if(this != &other)
    {
        this->_grade = other.getGrade();
    }
    return *this;
}

const std::string Bureaucrat::getName()const
{
    return this->_name;
}

int Bureaucrat::getGrade()const
{
    return this->_grade;
}
void Bureaucrat::setGrade(int grade)
{
    this->_grade = grade;
}


Bureaucrat Bureaucrat::increment()
{
    this->_grade--;
    if(_grade < 1)
        std::cout << "Invalid Grade!" << std::endl;
    return *this;
}

Bureaucrat Bureaucrat::decrement()
{
    this->_grade++;
    if(_grade > 149 )
        std::cout << "Invalid Grade!" << std::endl;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName() << ", bureacrat grade " << bureaucrat.getGrade();
    return os;
}