#pragma once
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        const std::string _target;
        RobotomyRequestForm();
        void Aexecute();

    public:
        RobotomyRequestForm(std::string target);
        virtual ~RobotomyRequestForm();

        RobotomyRequestForm(const RobotomyRequestForm& other);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

        std::string getTarget()const;

        class RobotomyFailedException : public std::exception
        {
            virtual const char* what() const throw();
        };
};