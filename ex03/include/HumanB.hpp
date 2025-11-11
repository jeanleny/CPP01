#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <Weapon.hpp>
#include <iostream>

class HumanB
{
	public :
	void	attack();
	void	setWeapon(Weapon& weapon);
	HumanB(const std::string& name);
	~HumanB();

	
	private :
	const std::string	_name;
	Weapon				*_weapon;
};


#endif
