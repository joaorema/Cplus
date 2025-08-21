#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <cstdlib>
#include <ctime>


RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45), _target(target)
{
    std::cout << RED "Robot Request Form created!" RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other.getName(), other.getToSign(), other.getToExecute()), _target(other._target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

std::string RobotomyRequestForm::getTarget() const
{
    return this->_target;
}

const char* RobotomyRequestForm::RobotomyFailedException:: what() const throw()
{
    return ("Robotization failed!!!");
}

void RobotomyRequestForm::Aexecute()
{
    srand(time(NULL));
    int odd = rand() % 2;
    if(odd)
    {
        std::cout << "Beep Boop" << std::endl;
        std::cout << this->_target << " has been robotized!!!" << std::endl;
    }
    else
        throw RobotomyFailedException();
    
}