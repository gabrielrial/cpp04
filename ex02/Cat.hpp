#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "AAnimal.hpp"

#define YELLOW "\033[33m"
#define RESET "\033[0m"

class Cat : public AAnimal
{
private:
	Brain *brain;
	
public:
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat();

	void makeSound(void) const;
	void setBrainIdea(int index, const std::string &idea);
    std::string getBrainIdea(int index) const;
};

#endif