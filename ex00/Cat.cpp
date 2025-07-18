#include "Cat.hpp"

Cat::Cat() : Animal() {
    std::cout << YELLOW << "[Cat] " << RESET << "Default Constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat &other) {
    std::cout << YELLOW << "[Cat]" << RESET << " Copy Constructor called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << YELLOW << "[Cat]" << RESET << " Copy Assignment Operator called" << std::endl;
    if (this != &other) {
        type = "Cat";
    }
    return *this;
}

Cat::~Cat() {
    std::cout << YELLOW << "[Cat]" << RESET << " destructor called" << std::endl;
    // Destructor
}

void Cat::makeSound(void) const
{
	std::cout << type << " says: **Meeeoow**" << std::endl;
}