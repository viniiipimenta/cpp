#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &src);
        ~Cat();
        Cat &operator=(const Cat &src);

        void makeSound()const;
        void getIdeas(void)const;
        void setIdeas(size_t i, std::string ideas);
        
    private:
        Brain *brain;
};

#endif