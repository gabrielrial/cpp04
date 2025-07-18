#include "Cat.hpp"

Cat::Cat()
{
	std::cout << YELLOW << "[Cat]" << RESET << " Default Constructor called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &other)
{
	std::cout << YELLOW << "[Cat]" << RESET << " Copy Constructor called" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*other.brain);
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << YELLOW << "[Cat]" << RESET << " Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		if (this->brain != NULL)
			delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << YELLOW << "[Cat]" << RESET << " destructor called" << std::endl;
	delete brain;
}

void Cat::makeSound(void) const
{
	std::cout << type << " says: **Meeeoow**" << std::endl;
}

void Cat::setBrainIdea(int index, const std::string &idea)
{
	brain->setIdea(index, idea);
}

std::string Cat::getBrainIdea(int index) const
{
	return brain->getIdea(index);
}