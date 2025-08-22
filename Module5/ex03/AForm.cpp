#include "AForm.hpp"

AForm::AForm() :_name("John Doe"), _tosign(0), _toexecute(0)
{
    _isSigned = false;
    //std::cout << "Normal Constructor called" << std::endl;
}

AForm::AForm(const std::string name, const int tosign, const int toexecute) : _name(name),_tosign(tosign), _toexecute(toexecute)
{
    _isSigned = false;
}

AForm::~AForm()
{

}

AForm::AForm(const AForm& other) : _name(other._name), _isSigned(other._isSigned), _tosign(other._tosign), _toexecute(other._toexecute)
{

}

AForm& AForm::operator=(const AForm& other)
{
    if(this != &other)
    {
        this->_isSigned = other._isSigned;
    }
    return *this;
}

int AForm::getToSign()const
{
    return this->_tosign;
}

int AForm::getToExecute()const
{
    return this->_toexecute;
}

bool AForm::isSigned()const
{
    return this->_isSigned;
}

const std::string AForm::getName()const
{
    return this->_name;
}


void AForm::beSigned(const Bureaucrat& b)
{
    if(b.getGrade() > _tosign)
        throw GradeTooLowException();
    else
        _isSigned = true;
    
}

const char* AForm::GradeTooHighException:: what() const throw()
{
    return ("Grade to high!");
}

const char* AForm::GradeTooLowException:: what() const throw()
{
    return("grade to low!");
}

const char* AForm::NotSigned:: what() const throw()
{
    return ("Form is not Signed!");
}

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
    os << RED "Form name: " RESET << form.getName() << std::endl 
       << RED "Signed: " RESET << (form.isSigned() ? "true" : "false" )<< std::endl
       << RED "to Sign : " RESET << form.getToSign() << std::endl
       << RED "to execute :  " RESET << form.getToExecute() << std::endl;
    return os;

}


void AForm::execute(const Bureaucrat& executor)
{
    if(this->isSigned() == false)
        throw NotSigned();
    else if(executor.getGrade() > this->_tosign)
        throw Bureaucrat::GradeTooLowException();
    else
    {
        try
        {
            this->Aexecute();

        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
}

