#include <Zombie.hpp>

Zombie *newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}

void	randomChump(std::string name)
{
	Zombie zombie = Zombie (name);
	zombie.announce();
	return ;
}
