#include "Harl.hpp"

Harl::Harl() {

	return;
}

Harl::~Harl() {

	return;
}

void	Harl::complain(std::string level) {

	void	(Harl::*complaint[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int	i = -1;
	while (++i < 4)
	{
		if (levels[i] == level)
			break ;
	}
	switch (i)
	{
		case 0:
			(this->*complaint[0])();
		case 1:
			(this->*complaint[1])();
		case 2:
			(this->*complaint[2])();
		case 3:
			(this->*complaint[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Harl::debug(void) {

	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << "I really do!" << std::endl;
}

void	Harl::info(void) {

	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << "You didn’t put enough bacon in my burger! If you did, ";
	std::cout << "I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void) {

	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << "I’ve been coming for years whereas you started ";
	std::cout << "working here since last month." << std::endl;
}

void	Harl::error(void) {

	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
