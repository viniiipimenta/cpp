#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon &gun);
        ~HumanA();
        void attack();
        void setWeapon (Weapon gun);

    private:
        std::string name;
        Weapon &gun;
};

#endif