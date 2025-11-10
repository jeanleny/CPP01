#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>

class HumanB
{
	public :
	void	attack();
	void	setType(const std::string& type);
	void	setWeapon(std::string type);
	HumanB(const std::string& name);
	~HumanB();

	
	private :
	const std::string	_name;
};


#endif
