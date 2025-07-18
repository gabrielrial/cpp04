#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << BLUE << "[WrongCat] " << RESET << "Default Constructor called" << std::endl;
    type = "";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal() {
    // Destructor
}

void WrongAnimal::makeSound() const
{
	std::cout << BLUE << "[WrongAnimal]" << RESET  << " doesn't make any sound." << std::endl;
}
