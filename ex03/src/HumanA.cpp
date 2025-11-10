#include <HumanA.hpp>

void	HumanA::setName(const std::string& name)
{
	_name = name;
}

HumanA::HumanA(const std::string& name, std::string& type)
{
	setName(name);
	setType(type);
}
