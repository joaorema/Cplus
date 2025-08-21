#pragma once
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include <exception>

#define      RED		 "\033[0;31m"
#define     GREEN		 "\033[0;32m"
#define     RESET		 "\033[0m"

class Bureaucrat;

class AForm    //Virtual class 
{
    private:
        AForm();
        const std::string _name;
        bool _isSigned;
        const int _tosign;
        const int _toexecute;
        virtual void Aexecute() = 0;
        
    public:

        AForm(std::string name, int tosign, int toexecute);
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        virtual ~AForm() = 0;
        
        //getters
        int getToSign()const;
        int getToExecute()const;
        bool isSigned()const;
        const std::string getName()const;

        void beSigned(const Bureaucrat& b);

        class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw();
        };

        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw();
        };
        
        class NotSigned : public std::exception
        {
            virtual const char* what() const throw();
        };

        void execute(const Bureaucrat& executor);

};

std::ostream& operator<<(std::ostream& os, const AForm& form);
