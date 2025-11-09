#include <Zombie.hpp>

int main(void)
{
	Zombie oui = Zombie("jeanmichel le zombie");
	Zombie *non = newZombie("bernadoss le bolosse");
	randomChump("vixentiss la saucisse");
	oui.announce();
	non->announce();
	(void)non;
	delete non;
}
