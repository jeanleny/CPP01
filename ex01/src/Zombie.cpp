#include <Zombie.hpp>

Zombie::Zombie (){return;}

Zombie::~Zombie (){return;}

void	Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setZombieName(std::string name)
{
	_name = name;
	return;
}

