#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "Brain.hpp"

class Animal
{
    public:
        Animal();
        Animal(const Animal &src);
        virtual ~Animal();
        Animal &operator=(const Animal &src);

        virtual void    makeSound()const;
        std::string     getType()const;
        
    protected:
        std::string type;
};

#endif