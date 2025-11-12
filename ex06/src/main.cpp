#include <Harl.hpp>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Harl annoying;
		annoying.complain(argv[1]);
	}
	else
		std::cout << "Please complain properly" << std::endl;
}
