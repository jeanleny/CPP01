#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie
{
	public :
		void	announce(void);
		Zombie(std::string zombieName);
		~Zombie();
	private :
		std::string	name;
};

Zombie*	newZombie(std::string name);

void	randomChump(std::string name);


#endif
