#ifndef BUREAUCRAT_HPP
 #define BUREAUCRAT_HPP

#include <iostream>
#include <string>


#define      RED		 "\033[0;31m"
#define     GREEN		 "\033[0;32m"
#define     RESET		 "\033[0m"

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
        //constructor & destructors
        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        ~Bureaucrat();

        //copy constructor
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat& operator=(const Bureaucrat &other);

        //Getters & setters
        const std::string getName()const;

        int getGrade()const;
        void setGrade(int grade);

        Bureaucrat increment();
        Bureaucrat decrement();
        
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif