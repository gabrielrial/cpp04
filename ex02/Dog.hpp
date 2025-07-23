#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"

#define GREEN "\033[1;32m"
#define RESET "\033[0m"

class Dog : public AAnimal
{
private:
	Brain *brain;

public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog();

	void makeSound(void) const;
	void setBrainIdea(int index, const std::string &idea);
	std::string getBrainIdea(int index) const;
};

#endif