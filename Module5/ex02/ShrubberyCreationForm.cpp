#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <fstream>
#include <ostream>
#include <iostream>


void ShrubberyCreationForm::printTree(std::ostream& os)
{
    int height = 20;
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < height - i - 1; ++j) {
            os << " ";
        }
        for (int k = 0; k < 2 * i + 1; ++k) {
            os << "*";
        }
        os << std::endl;
    }
    for (int i = 0; i < height / 3; ++i) {
        for (int j = 0; j < height - 1; ++j) {
            os << " ";
        }
        os << "*" << std::endl;
    }
    os << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137), _target(target)
{
    std::cout << RED "Shrubbery Created!" RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other.getName(), other.getToSign(), other.getToExecute()), _target(other._target)
{

}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Shrubbery destroyed" << std::endl;
}

std::string ShrubberyCreationForm::getTarget()const
{
    return this->_target;
}

void ShrubberyCreationForm::Aexecute()
{
    std::ofstream File((this->_target + "_shrubbery").c_str(), std::ofstream::out);   //create file with target name + _shrubbery 
    try
    {
        File.is_open();
    }
    catch(const std::exception& e)
    {
        std::cout << "Error. Invalid target" <<  std::endl;
        return;
    }
    this->printTree(File);
}