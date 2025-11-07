#include <Zombie.hpp>

int main(void)
{
	Zombie oui = Zombie("jeanmichel le zombie");
	Zombie *non = newZombie("bernadoss le bolosse");
	randomChump("vixentiss la saucisse");
	(void)non;
	delete non;
}
