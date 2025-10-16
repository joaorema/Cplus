#include "MutantStack.hpp"

#define     RED		     "\033[0;31m"
#define     GREEN		 "\033[0;32m"
#define     RESET		 "\033[0m"


int main()
{
    {
        std::cout << GREEN "Exemple from the subject" RESET << std::endl;
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << GREEN"Added 2 values to the stack. Lets check the last one pushed"RESET << std::endl; 
        std::cout << mstack.top() << std::endl;
        std::cout << std::endl;
    
        std::cout << GREEN"Lets remove use pop and remove the top value"RESET << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        std::cout << std::endl;
    
        std::cout << GREEN "Lets add some more values to the stack. Current stack = (5,3,5,737,0)" RESET<< std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
    
        std::cout << GREEN "Lets test the iterators" RESET << std::endl;
        std::cout << GREEN "Normal iterator" RESET<< std::endl;
        MutantStack<int>::ite it = mstack.begin();                              //create iterator from the first value
        MutantStack<int>::ite ite = mstack.end();                               //create iterator from the last value
        ++it;
        --it;
        while (it != ite)
            {
                std::cout << *it << " , ";
                ++it;
            }
        std::cout << std::endl;
        std::cout << GREEN "Reverse iterator"RESET << std::endl;
        MutantStack<int>::reverse_ite start = mstack.rbegin();
        MutantStack<int>::reverse_ite end = mstack.rend();
        while(start != end)
        {
            std::cout << *start << " , ";
            start++;
        }
        std::cout << std::endl;
        std::cout << GREEN "Lets create a normal stack = to our stack "RESET << std::endl;
        std::stack<int> s(mstack);
        std::cout << GREEN"Check Size"RESET << std::endl;
        std::cout << "Original stack : " << mstack.size() << std::endl;
        std::cout << "New stack (std::stack) : " << s.size() << std::endl;
        std::cout << "Original stack top value : " << mstack.top() << std::endl;
        std::cout << "New stack (std::stack) top value : " << s.top() << std::endl;
    }
    std::cout << std::endl;
    {

        std::cout << GREEN"My own tests" RESET << std::endl;
        MutantStack<char> newstack;

        std::cout << GREEN "Lets create a MutanStack of chars and put the full alphabet there"RESET << std::endl;
        for(int i = 0; i < 26; i++)
        {
            char add = 'a' + i;
            newstack.push(add);

        }
        std::cout << "Last value of the stack : " << newstack.top() << std::endl;
        std::cout << "Iterator Test" << std::endl;
        MutantStack<char>::ite start = newstack.begin();
        MutantStack<char>::ite end = newstack.end();
        while(start != end)
        {
            std::cout << *start << " , ";
            start++;
        }
        std::cout << std::endl;
        std::cout << "Reverse Iterator test" << std::endl;
        MutantStack<char>::reverse_ite rev_it = newstack.rbegin();
        MutantStack<char>::reverse_ite rev_it_end = newstack.rend();
        while(rev_it != rev_it_end)
        {
            std::cout << *rev_it << " , ";
            rev_it++;
        }
        std::cout << std::endl;
    }
}