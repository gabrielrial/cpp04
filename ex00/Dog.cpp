#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	std::cout << GREEN << "[Cat] " << RESET << "Default Constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &other)
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
	// Destructor
}

void Dog::makeSound(void) const
{
	std::cout << type << " says: **Guau Guau**" << std::endl;
}