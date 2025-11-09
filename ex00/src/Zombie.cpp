#include <Zombie.hpp>

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

Zombie::Zombie(std::string zombieName)
{
	name = zombieName;
	return ;
}


Zombie::~Zombie()
{
	std::cout << "orvwar " << name << std::endl;
	return ;
}
