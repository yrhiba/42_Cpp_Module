#include "HumanB.hpp"

HumanB::HumanB()
{
	std::cout << "HumanB : Default Constructor Called" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB : Destructor Called" << std::endl;
}

HumanB::HumanB(HumanB const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

HumanB	&HumanB::operator= (const HumanB &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		//	this->attributes = obj.attributes;
		//	...
	}
	return (*this);
}
