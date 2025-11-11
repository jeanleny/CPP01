#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string& stringREF = str;
	std::cout << "str adress : " << &str << std::endl << "str pointer : " << stringPTR << std::endl << "string REF : " << &stringREF << std::endl;
	std::cout << "str : " << str << std::endl << "string pointer value : " << *stringPTR << std::endl << "string REF value : " << stringREF << std::endl;
	return (1);
}
