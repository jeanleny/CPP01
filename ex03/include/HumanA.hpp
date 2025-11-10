#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>

class HumanA
{
	public :
	void	attack();
	void	setType(const std::string& type);
	void	setName(const std::string& name);
	HumanA(const std::string& name, std::string& type);
	~HumanA();
	
	private:
	std::string _name;
	
};

#endif
