#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << YELLOW << "[Cat] " << RESET << "Default Constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << YELLOW << "[Cat]" << RESET << " Copy Constructor called" << std::endl;
	this->type = other.type;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << YELLOW << "[Cat]" << RESET << " Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << YELLOW << "[Cat]" << RESET << " destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << YELLOW << type << RESET <<" says: **Meeeoow**" << std::endl;
}