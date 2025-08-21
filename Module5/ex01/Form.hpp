#pragma once
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include <exception>

#define      RED		 "\033[0;31m"
#define     GREEN		 "\033[0;32m"
#define     RESET		 "\033[0m"

class Bureaucrat;

class Form 
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _tosign;
        const int _toexecute;

    public:

        Form();
        Form(std::string name, int tosign, int toexecute);
        ~Form();

        Form(const Form& other);
        Form& operator=(const Form& other);

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


};

std::ostream& operator<<(std::ostream& os, const Form& form);
