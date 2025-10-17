#include "RPN.hpp"

int main(int ac, char *av[])
{
    if(ac != 2)
    {
        std::cout << "Invalid Arguments!" << std::endl;
        return 1;
    }
    else
    {
        RPN math(av[1]);
        math.trim();
        if(math.addToStack() == 0)
            std::cout << math._stack.top() << std::endl;
    }
}   

/*
//EXEMPLES(tests)
2 2 * 4 +	        = 8
5 1 + 3 *	        = 18
9 2 - 3 /	        = 2
6 3 / 2 *	        = 4
8 4 / 2 +	        = 4
3 4 + 2 * 7 /	    = 2	    
5 1 2 + 4 * + 3 -	= 14	   
9 1 - 8 / 2 +	    = 3	
*/