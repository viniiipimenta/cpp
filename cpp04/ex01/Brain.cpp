#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain default destructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain &Brain::operator=(const Brain &src)
{
    std::cout << "Brain assignment operator called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        if (src.ideas[i].length() > 0)
            this->ideas[i].assign(src.ideas[i]);
    }
    return (*this);
}

const std::string Brain::getIdeas(size_t i)const
{
    if (i < 100)
        return (this->ideas[i]);
    else
        return ("Put a valid number, there are 100 ideas for the brain");
}

const std::string *Brain::getIdeaAddress(size_t i) const
{
    if (i < 100)
    {
        const std::string &strREF = this->ideas[i];
        return (&strREF);
    }
    return (NULL);
}

void Brain::setIdeas(size_t i, std::string ideas)
{
    if (i < 100)
        this->ideas[i] = ideas;
    else
        std::cout<< "Put a valid number, there are 100 ideas for the brain" << std::endl;
}