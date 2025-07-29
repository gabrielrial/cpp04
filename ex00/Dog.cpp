#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << GREEN << "[Dog] " << RESET << "Default Constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << GREEN << "[Dog]" << RESET << " Copy Constructor called" << std::endl;
	this->type = other.type;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << GREEN << "[Dog]" << RESET << " Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << GREEN << "[Dog]" << RESET << " destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << GREEN << type << RESET << " says: **Guau Guau**" << std::endl;
}