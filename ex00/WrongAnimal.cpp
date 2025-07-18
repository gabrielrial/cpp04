#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << BLUE << "[WrongCat] " << RESET << "Default Constructor called" << std::endl;
    type = "";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << BLUE << "[WrongAnimal]" << RESET << " Copy Constructor called" << std::endl;
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << BLUE << "[WrongAnimal]" << RESET << " Copy Assignment Operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    // Destructor
}

void WrongAnimal::makeSound() const
{
    std::cout << BLUE << "[WrongAnimal]" << RESET << " doesn't make any sound." << std::endl;
}
