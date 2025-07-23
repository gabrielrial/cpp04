#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#define RED "\033[31m"
#define RESET "\033[0m"

class AAnimal
{
protected:
	std::string type;

public:
	AAnimal();
	AAnimal(const AAnimal &other);
	AAnimal &operator=(const AAnimal &other);
	virtual ~AAnimal();

	virtual void makeSound() const;
	std::string getType() const;
};

#endif