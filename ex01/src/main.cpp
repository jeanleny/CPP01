#include <Zombie.hpp>

int	main(void)
{
	int	N = 4;
	Zombie *laHorde = zombieHorde(N, "enfaite");
	if (!laHorde)
	{
		std::cout << "mais ntm en fait" << std::endl;
		return (-1);
	}
	for (int i = 0; i < N; i++)
	{
		laHorde[i].announce();
	}
	delete[] laHorde;
} 
