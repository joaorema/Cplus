#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5), _target(target) 
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other.getName(), other.getToSign(), other.getToExecute()), _target(other._target)
{

}


std::string PresidentialPardonForm::getTarget()const
{
    return this->_target;
}

void PresidentialPardonForm::Aexecute()
{
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}