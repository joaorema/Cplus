#pragma once
#include <string>
#include <iostream>
#include <sys/types.h>
#include <stdint.h>
#include <stdexcept>



template<typename T>
class Array
{
    private:
        unsigned int _size;
        T* _array;

    public:
        Array() : _array(NULL), _size(0) {};                       //constructor with no parameters

        ~Array()                                                    //destructor 
        {
            delete[] _array;
        } 

        Array(unsigned int n) : _size(n)                            //constructor with unsigned int 
        {
            _array = new T[_size];
        }

        Array(const Array& copy) : _size(copy._size)              //copy constructor
        {
            _array = new T[_size];
            for(int i = 0; i < _size; i++)
            {
                _array[i] = copy._array[i];
            }
            
        }

        Array& operator=(const Array& copy)                       //assigment operator 
        {
            if(this != &copy)
            {
                delete[] _array;
                _size = copy._size;
                _array = new T[_size];
                for(unsigned int i = 0; i < _size; i++)
                {
                    _array[i] = copy._array[i];
                }
            }
            return *this;
        }

        int size()                                             //return nbr of elements in array
        {
            return this->_size;
        }
        
        T& operator[](unsigned int index)                      //check if index is valid and if so returns the value 
        {
            if(index >= _size)
            {
                throw(std::exception());
            }
            return _array[index];
        }

};


