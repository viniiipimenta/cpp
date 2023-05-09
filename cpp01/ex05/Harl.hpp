#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
    public:
        Harl(/* args */);
        ~Harl();
        void debug();
        void info();
        void warning();
        void error();
        void complain(std::string level);
};


#endif