#include "Animal.hpp"

Animal::Animal(): type("unknown")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& src)
{
	*this = src;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& assign)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if(this != &assign)
	{
		this->type = assign.type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "generic animal sound" << std::endl;
}


std::string Animal::getType() const
{
	return this->type;
}