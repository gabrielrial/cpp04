#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	std::cout << GREEN << "[Dog] " << RESET << "Default Constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
	std::cout << GREEN << "[Dog]" << RESET << " Copy Constructor called" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << GREEN << "[Dog]" << RESET << " Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		if (this->brain != NULL)
			delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << GREEN << "[Dog]" << RESET << " destructor called" << std::endl;
	delete brain;
}

void Dog::makeSound(void) const
{
	std::cout << GREEN << type << RESET << " says: **Guau Guau**" << std::endl;
}

void Dog::setBrainIdea(int index, const std::string &idea)
{
	brain->setIdea(index, idea);
}

std::string Dog::getBrainIdea(int index) const
{
	return brain->getIdea(index);
}