#include "AAnimal.hpp"

AAnimal::AAnimal() {
    std::cout << RED << "[Animal] " << RESET << "Default Constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) {
    std::cout << RED << "[Animal]" << RESET << " Copy Constructor called" << std::endl;
    *this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
    std::cout << RED << "[Aniaml]" << RESET << " Copy Assignment Operator called" << std::endl;
    if (this != &other) {
        // Copiar los atributos aquí
    }
    return *this;
}

AAnimal::~AAnimal() {
    std::cout << RED << "[Animal]" << RESET << " destructor called" << std::endl;
}

//void AAnimal::makeSound(void) const
//{
//	std::cout << "This animal doesn't make any sound." << std::endl;
//}

std::string AAnimal::getType(void) const
{
    return type;
}