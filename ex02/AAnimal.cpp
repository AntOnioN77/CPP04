#include "AAnimal.hpp"

AAnimal::AAnimal(): type("unknown")
{
	std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& src)
{
	*this = src;
	std::cout << "Animal copy constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& assign)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if(this != &assign)
	{
		this->type = assign.type;
	}
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called" << std::endl;
}


std::string AAnimal::getType() const
{
	return this->type;
}