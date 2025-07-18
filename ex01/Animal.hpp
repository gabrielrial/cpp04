#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

#define RED "\033[31m"
#define RESET "\033[0m"

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	virtual ~Animal();

	virtual void makeSound() const;
	std::string getType() const;
};

#endif