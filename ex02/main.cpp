#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include <string>

int main()
{
	// const Animal *j = new Dog();
	// const Animal *i = new Cat();
	//
	// delete j;
	// delete i;

	{
		Dog boby;
		Dog firulai(boby);

		for (int i = 0; i < 100; i++)
			boby.setBrainIdea(i, "brain");

		std::cout << "Idea: " << boby.getBrainIdea(5) << std::endl;
		boby.setBrainIdea(5, "I want a treat");
		std::cout << "Idea: " << boby.getBrainIdea(5) << std::endl;

		std::cout << "Idea: " << firulai.getBrainIdea(5) << std::endl;
	}

	//{
	//	AAnimal a;
	//}
}