#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

#define GREEN "\033[1;32m"
#define RESET "\033[0m"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog();

	void makeSound(void) const;
};

#endif