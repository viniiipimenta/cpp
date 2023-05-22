#include "Dog.hpp"

// Constructors and destructor

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();

    if (!this->brain)
    {
        perror("Dog brain failed to allocate");
        exit(1);
    }
}

Dog::Dog(const Dog &src) : Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog &Dog::operator=(const Dog &src)
{
    std::cout << "Dog assignment operator called" << std::endl;
    this->type = src.type;
    this->brain = new Brain();

    if (!this->brain)
    {
        perror("Dog brain failed to allocate");
        exit(1);
    }
    *this->brain = *src.brain;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete(this->brain);
}

// Actions

void Dog::makeSound()const
{
    std::cout << this->getType() << ": RUFF RUFF" << std::endl;
}

void Dog::getIdeas(void)const
{
    for (size_t i = 0; i < 100; i++)
    {
        if (!this->brain->getIdeas(i).empty())
        {
            std::cout << "Idea " << i << " of the Dog is " << this->brain->getIdeas(i);
            std::cout << " at the address " << this->brain->getIdeaAddress(i) << std::endl;
        }
    }
}

void Dog::setIdeas(size_t i, std::string ideas)
{
    this->brain->setIdeas(i, ideas);
}