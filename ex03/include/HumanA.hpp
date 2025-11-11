#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <Weapon.hpp>

class HumanA
{
	public :
	void	attack();
	HumanA(const std::string& name, Weapon& weapon);
	~HumanA();
	
	private:
	std::string _name;
	Weapon		*_weapon;	
};

#endif
