#include "Cat.hpp"

// Constructors and destructor

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();

    if (!this->brain)
    {
        perror("Cat brain failed to allocate");
        exit(1);
    }
}

Cat::Cat(const Cat &src) : Animal(src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat &Cat::operator=(const Cat &src)
{
    std::cout << "Cat assignment operator called" << std::endl;
    this->type = src.type;
    this->brain = new Brain();

    if (!this->brain)
    {
        perror("Cat brain failed to allocate");
        exit(1);
    }
    *this->brain = *src.brain;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete(this->brain);
}

// Actions

void Cat::makeSound()const
{
    std::cout << this->getType() << ": Meeeoowwww" << std::endl;
}

void Cat::getIdeas(void)const
{
    for (size_t i = 0; i < 100; i++)
    {
        if (!this->brain->getIdeas(i).empty())
        {
            std::cout << "Idea " << i << " of the Cat is " << this->brain->getIdeas(i);
            std::cout << " at the address " << this->brain->getIdeaAddress(i) << std::endl;
        }
    }
}

void Cat::setIdeas(size_t i, std::string ideas)
{
    this->brain->setIdeas(i, ideas);
}