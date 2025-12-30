#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("unknown")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& src)
{
	*this = src;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& assign)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if(this != &assign)
	{
		this->type = assign.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "generic WrongAnimal sound" << std::endl;
}


std::string WrongAnimal::getType() const
{
	return this->type;
}