#include <iostream>
#include <fstream>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string		name = argv[1];
		name += ".replace";
		std::ifstream	old(argv[1]);
		std::ofstream	ofs(name.c_str());
		std::string		oui;
		std::string		s1 = argv[2];
		std::string		s2 = argv[3];
		
		while (std::getline(old, oui))
		{
			std::size_t index = oui.find(s1);
			while (index != std::string::npos)
			{
				oui.erase(index, s1.length());
				oui.insert(index, s2);
				index += s2.length();
				index = oui.find(s1, index);
			}
			ofs << oui;
			if (!old.eof())
				ofs << std::endl;
		}
		ofs.close();
		old.close();
	}
	else
		std::cout << "Please enter 3 arguments" << std::endl;
}
