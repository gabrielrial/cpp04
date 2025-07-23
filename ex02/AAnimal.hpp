#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

#define RED "\033[31m"
#define RESET "\033[0m"

class AAnimal
{
protected:
	std::string type;
	AAnimal();
	AAnimal(const AAnimal &other);
	AAnimal &operator=(const AAnimal &other);
	
public:
	virtual ~AAnimal();
	static AAnimal& getInstance();

	virtual void makeSound() const = 0;
	std::string getType() const;
};

#endif