#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];                                 //create array with 100 strings
    public:
        Brain();
        ~Brain();

        //copy constructor              create new one from other object
        Brain(const Brain& other);
        //copy assigment operator       copy data from other into existing object
        Brain& operator=(const Brain& other);                   
        std::string getIdea(int index)const;                    //use index to chose wich ideia to get
        void setIdeia(int index, const std::string& ideia);     
};

#endif