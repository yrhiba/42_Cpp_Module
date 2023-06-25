#ifndef _HumanA_HPP_
#define _HumanA_HPP_

#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
	public	:
		HumanA (std::string _name, Weapon &_weapon);
		~HumanA ();
		void	attack(void);

	private	:
		Weapon		&weapon;
		std::string	name;
};

#endif
