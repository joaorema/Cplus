#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain was created" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain was destroyed" << std::endl;
}

std::string Brain::getIdea(int index)const
{
    if(index < 0 || index > 99)
    {
        std::cout << "Invalid Index" << std::endl;
        return "";
    }
    else
        return ideas[index];
}

void Brain::setIdeia(int index, const std::string& ideia)
{
    if(index < 0 || index > 99)
    {
        std::cout << "Invalid Index" << std::endl;
        return;
    }
    ideas[index] = ideia;
}

Brain::Brain(const Brain& other)
{
    if(this != &other)
    {
        for(int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
}

Brain& Brain::operator=(const Brain& other)
{
    if(this != &other)
    {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return *this;
}
