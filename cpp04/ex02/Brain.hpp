#ifndef BRAIN_HPP
#define BARIN_HPP

#include <iostream>

class Brain
{
    public:
        Brain();
        Brain(const Brain &src);
        virtual ~Brain();
        Brain &operator=(const Brain &src);

        const std::string getIdeas(size_t i)const;
        const std::string *getIdeaAddress(size_t i)const;
        void setIdeas(size_t i, std::string ideas);

    private:
        std::string ideas[100];
};

#endif