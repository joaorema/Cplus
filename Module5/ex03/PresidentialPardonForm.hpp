#pragma once
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:  
        const std::string _target;
        PresidentialPardonForm();
        void Aexecute();
    
        
    public:
        PresidentialPardonForm(std::string target);
        virtual ~PresidentialPardonForm();

        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

        std::string getTarget()const;

        
};