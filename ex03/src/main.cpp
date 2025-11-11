#include <HumanA.hpp>
#include <HumanB.hpp>
#include <Weapon.hpp>

int	main(void)
{
	Weapon	gun("zedou");
	HumanA	eljo("le jo", gun);
	eljo.attack();
	gun.setType("deagle");
	eljo.attack();

	Weapon	arme("battass");
	HumanB	ledavid("le jo");
	ledavid.setWeapon(arme);
	ledavid.attack();
	arme.setType("stickoss");
	ledavid.attack();
}
