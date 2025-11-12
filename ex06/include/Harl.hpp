#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

typedef enum e_param
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
}	e_param;

class	Harl
{
	public :
	void	complain(std::string level);
	void	filteredComplain(int index);
	Harl();
	~Harl();

	private :
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	
};

#endif
