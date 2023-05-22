#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &src);
        ~Dog();
        Dog &operator=(const Dog &src);

        void makeSound()const;
        void setIdeas(size_t i, std::string ideas);
        void getIdeas(void)const;
        
    private:
        Brain *brain;
};

#endif