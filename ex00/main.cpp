#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		std::cout << j->getType() << " " << std::endl; // DOG
		std::cout << i->getType() << " " << std::endl; // CAT

		i->makeSound(); // CAT
		j->makeSound(); // DOG
		meta->makeSound(); // ANIMAL

		// delete meta;
		// delete j;
		// delete i;
	}
	{
		const WrongAnimal *i = new WrongCat();
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		delete i;
	}
}