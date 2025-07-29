#include "Animal.hpp"

Animal::Animal()
{
    std::cout << RED << "[Animal] " << RESET << "Default Constructor called" << std::endl;
    type = "";
}

Animal::Animal(const Animal &other)
{
    std::cout << RED << "[Animal]" << RESET << " Copy Constructor called" << std::endl;
    *this = other;
}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << RED << "[Aniaml]" << RESET << " Copy Assignment Operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << RED << "[Animal]" << RESET << " destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
    std::cout << RED << "Animal" << RESET << " This animal doesn't make any sound." << std::endl;
}

std::string Animal::getType(void) const
{
    return type;
}