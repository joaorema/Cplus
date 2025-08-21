#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Ambrosio")
{
    this->_grade = 42;
    //std::cout << "Normal constructor called" << std::endl
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if(grade < 1)
        throw GradeTooHighException();
    else if(grade > 150)
        throw GradeTooLowException();
    else
    {
        _grade = grade;
        //std::cout << "Hello my name is " << name << " and my grade is " << grade << std::endl;
    }


}

Bureaucrat::~Bureaucrat()
{
    //std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _grade(other._grade)
{
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if(this != &other)
    {
        this->_grade = other._grade;
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


void Bureaucrat::increment()
{
    this->_grade--;
    if(_grade == 0)
        throw GradeTooLowException();
}

void Bureaucrat::decrement()
{
    this->_grade++;
    if(_grade == 151)
        throw GradeTooHighException();
}

void Bureaucrat::signForm(Form& form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
        
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade to High!");
}

const char* Bureaucrat::GradeTooLowException::what()const throw()
{
    return ("Grade to low!");
}


std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName() << ", bureacrat grade " << bureaucrat.getGrade();
    return os;
}
