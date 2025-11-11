#include <HumanA.hpp>
#include <HumanB.hpp>
#include <Weapon.hpp>

std::string Weapon::getType() const
{
	return (_type);
}

void	Weapon::setType(const std::string type)
{
	_type = type;
}

Weapon::Weapon(const std::string& name)
{
	_type = name;
}

Weapon::~Weapon() {return;}
