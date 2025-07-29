#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include <string>

#define MAX 4

int main()
{
	// ### TEST 1 ###
	{
		Animal *Jungle[MAX];
		for (int i = 0; i < MAX; i++)
		{
			if (i % 2 == 0)
				Jungle[i] = new Dog();
			else
				Jungle[i] = new Cat();
		}
		for (int i = 0; i < MAX; i++)
			delete Jungle[i];
	}
	// ### TEST 2 ###
	{
		std::cout << std::endl
				  << "### TEST 2 ###" << std::endl
				  << std::endl;
		Dog boby;
		Dog firulais(boby);

		for (int i = 0; i < 100; i++)
			boby.setBrainIdea(i, "Ball");
		// ###
		std::cout << std::endl
				  << "### printing idea 5 ###" << std::endl
				  << std::endl;
		std::cout << "Boby idea 5: " << boby.getBrainIdea(5) << std::endl;
		std::cout << "Boby idea 4: " << boby.getBrainIdea(4) << std::endl;
		std::cout << "Firulais idea 5: " << firulais.getBrainIdea(5) << std::endl;
		// ###
		std::cout << std::endl
				  << "### setting idea 5 ###" << std::endl
				  << std::endl;
		boby.setBrainIdea(5, "I want a treat");
		// ###
		std::cout << std::endl
				  << "### printing idea 5 ###" << std::endl
				  << std::endl;
		std::cout << "Boby idea 5: " << boby.getBrainIdea(5) << std::endl;
		std::cout << "Boby idea 4: " << boby.getBrainIdea(4) << std::endl;
		std::cout << "Firulais idea 5: " << firulais.getBrainIdea(5) << std::endl << std::endl;
		// ##
		std::cout << std::endl
				  << "### setting idea 5 of Firulais and printing ###" << std::endl
				  << std::endl;
		firulais.setBrainIdea(5, "Where is the ball?");
				std::cout << "Boby idea 5: " << boby.getBrainIdea(5) << std::endl;
		std::cout << "Boby idea 4: " << boby.getBrainIdea(4) << std::endl;
		std::cout << "Firulais idea 5: " << firulais.getBrainIdea(5) << std::endl;
		std::cout << std::endl;
	}
}