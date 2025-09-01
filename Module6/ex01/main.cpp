#include "Data.hpp"
#include "Serializer.hpp"


int main()
{
    {
        Data first;
    
    
        std::cout << GREEN "First Test" RESET << std::endl;
        std::cout << "Value before Serialize : " << &first << std::endl;        //&to access value
        uintptr_t result = Serializer::serialize(&first);                       //create new variable to hold the result
        std::cout << "After Serialize : " << result << std::endl;               //print value
        
        Data* second = Serializer::deserialize(result);                         //create Data that will have the ptr info
        
        if(&first == second)
        {
            std::cout << "After deserialize : " << second << std::endl;
        }
        else
        {
            std::cout << "Deserialized failed" << std::endl;
        }

    }
    {
        
        Data*  two = new Data;

        std::cout << GREEN "Second Test" RESET << std::endl;
        std::cout << "Value before Serialize : " << two << std::endl;
        uintptr_t result = Serializer::serialize(two);                       
        std::cout << "After Serialize : " << result << std::endl;
        
        Data* three = Serializer::deserialize(result);                         
        
        if(three == two)
        {
            std::cout << "After deserialize: " << two << std::endl;
        }
        else
        {
            std::cout << "Deserialized failed" << std::endl;
        }
    }
    {
        Data* final = new Data;
        Data* test = new Data;

        std::cout << GREEN "Final Test / 2 Data Ptrs" RESET << std::endl;

        std::cout << "Value before Serialize : " << final << std::endl;
        std::cout << "Value before Serialize : " << test << std::endl;

        uintptr_t result_1 = Serializer::serialize(final);
        uintptr_t result_2 = Serializer::serialize(test);
        
        std::cout << "After Serialize : " << std::endl;
        std::cout << "Value : " << result_1 << std::endl;
        std::cout << "Value : " << result_2 << std::endl;
        Data* oi = Serializer::deserialize(result_1);
        Data* bye = Serializer::deserialize(result_2);
        
        
        if(final == oi)
        {
            std::cout << "After deserialize : " << oi << std::endl;
        }
        else
        {
            std::cout << "Deserialized failed" << std::endl;
        }
        if(test == bye)
        {
            std::cout << "After deserialize : " << test << std::endl;
        }
        else
        {
            std::cout << "Deserialized failed" << std::endl;
        }
    }

}