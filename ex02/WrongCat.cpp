#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << MAGENTA << "[WrongCat] " << RESET << "Default Constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << MAGENTA << "[WrongCat]" << RESET << " Copy Constructor called" << std::endl;
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << MAGENTA << "[WrongCat]" << RESET << " Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << MAGENTA << "[WrongCat]" << RESET << " destructor called" << std::endl;
}