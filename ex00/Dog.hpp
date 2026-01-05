#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include "Animal.hpp"

class Dog: public Animal
{
protected:
	std::string type;
public:
	Dog();
	Dog(Dog& src);
	Dog& operator=(Dog& assign);
	~Dog();
	// Additional member functions
	void makeSound() const;
};

#endif
