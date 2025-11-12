#include <Harl.hpp>

int	main(void)
{
	Harl lechiant;

	lechiant.complain("");
	std::cout << std::endl;
	lechiant.complain("DEBUG");
	std::cout << std::endl;
	lechiant.complain("INFO");
	std::cout << std::endl;
	lechiant.complain("WARNING");
	std::cout << std::endl;
	lechiant.complain("ERROR");
	std::cout << std::endl;
	lechiant.complain("bite");
}
