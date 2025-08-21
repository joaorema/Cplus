#pragma once
#include <iostream>
#include <string>
#include "AForm.hpp"
#include <exception>


#define     RED		     "\033[0;31m"
#define     GREEN		 "\033[0;32m"
#define     RESET		 "\033[0m"

class AForm;

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;

    public:
        //constructor & destructors
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();

        //copy constructor
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat& operator=(const Bureaucrat& other);

        //Getters & setters
        const std::string getName()const;

        int getGrade()const;
        void setGrade(int grade);

        void increment();
        void decrement();
        void signForm(AForm& form)const;
        void executeForm(AForm& form);
        
        class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw();
        };

        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw();
        };


};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);
