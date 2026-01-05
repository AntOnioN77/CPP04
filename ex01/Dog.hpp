#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include "Brain.hpp"
#include "Animal.hpp"

class Dog: public Animal
{
protected:
	std::string type;
private:
	Brain* brain;
public:
	Dog();
	Dog(const Dog& src);
	Dog& operator=(const Dog& assign);
	~Dog();
	// Additional member functions
	void makeSound() const;
	Brain* getBrain() const;
};

#endif
