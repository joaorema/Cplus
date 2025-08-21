#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"


class ShrubberyCreationForm : public AForm
{
    private:
        ShrubberyCreationForm();
        void printTree(std::ostream& os);
        const std::string _target;
        void Aexecute();

    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
        std::string getTarget()const;
        
        

};