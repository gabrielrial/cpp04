#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

#define CIAN "\033[36m"
#define RESET "\033[0m"

class Brain
{
protected:
	std::string ideas[100];

public:
	Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);
	virtual ~Brain();

    void setIdea(int index, const std::string& idea);
    std::string getIdea(int index) const;
};

#endif