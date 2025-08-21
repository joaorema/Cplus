#include "Form.hpp"

Form::Form() :_name("John Doe"), _tosign(0), _toexecute(0)
{
    _isSigned = false;
    //std::cout << "Normal Constructor called" << std::endl;
}

Form::Form(const std::string name, const int tosign, const int toexecute) : _name(name),_tosign(tosign), _toexecute(toexecute)
{
    _isSigned = false;
}

Form::~Form()
{

}

Form::Form(const Form& other) : _name(other._name), _isSigned(other._isSigned), _tosign(other._tosign), _toexecute(other._toexecute)
{

}

Form& Form::operator=(const Form& other)
{
    if(this != &other)
    {
        this->_isSigned = other._isSigned;
    }
    return *this;
}

int Form::getToSign()const
{
    return this->_tosign;
}

int Form::getToExecute()const
{
    return this->_toexecute;
}

bool Form::isSigned()const
{
    return this->_isSigned;
}

const std::string Form::getName()const
{
    return this->_name;
}


void Form::beSigned(const Bureaucrat& b)
{
    if(b.getGrade() > _tosign)
        throw GradeTooLowException();
    else
        _isSigned = true;
    
}

const char* Form::GradeTooHighException:: what() const throw()
{
    return ("Grade to high!");
}

const char* Form::GradeTooLowException:: what() const throw()
{
    return("grade to low!");
}



std::ostream& operator<<(std::ostream& os, const Form& form)
{
    os << RED "Form name: " RESET << form.getName() << std::endl 
       << RED "Signed: " RESET << (form.isSigned() ? "true" : "false" )<< std::endl
       << RED "to Sign : " RESET << form.getToSign() << std::endl
       << RED "to execute :  " RESET << form.getToExecute() << std::endl;
    return os;

}




