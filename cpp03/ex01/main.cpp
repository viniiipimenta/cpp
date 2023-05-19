#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    std::cout << "TESTING CLAPTRAP\n" << std::endl;
	{
		std::cout << "Constructing" << std::endl;
		ClapTrap a;
		ClapTrap b("Cody");

		std::cout << "Testing" << std::endl;
		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
		std::cout << "Deconstructing" << std::endl;
	}
	std::cout << "TESTING SCAVTRAP" << std::endl;
	{
		std::cout << "Constructing" << std::endl;
		ScavTrap c;
		ScavTrap d("Savage");

		std::cout << "Testing" << std::endl;
		c.attack("CloneTrap");
		c.beRepaired(22);
		c.takeDamage(21);
		c.beRepaired(22);
		c.guardGate();
		d.attack("Savage-clone");
		d.takeDamage(101);
		d.guardGate();
		d.takeDamage(15);
		d.attack("ScavTrap-clone");
		std::cout << "Deconstructing" << std::endl;
	}

}