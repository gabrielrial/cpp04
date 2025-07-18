#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

#define YELLOW "\033[33m"
#define RESET "\033[0m"

class Cat : public Animal
{
private:
	// atributos privados aquí

public:
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat();

	void makeSound() const;
};

#endif