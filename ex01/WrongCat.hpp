#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.hpp"

#define MAGENTA "\033[35m"
#define RESET "\033[0m"

class WrongCat : public WrongAnimal
{
private:
    // atributos privados aquí

public:
    WrongCat();
    WrongCat(const WrongCat &other);
    WrongCat &operator=(const WrongCat &other);
    ~WrongCat();

    void makeSound();
};

#endif