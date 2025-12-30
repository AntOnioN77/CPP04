#include "WrongDog.hpp"

WrongDog::WrongDog(): WrongAnimal()
{
	WrongAnimal::type = "WrongDog";
	std::cout << "WrongDog default constructor called" << std::endl;
}

WrongDog::WrongDog(WrongDog& src): WrongAnimal()
{
	std::cout << "WrongDog copy constructor called" << std::endl;
	*this = src;
}

WrongDog& WrongDog::operator=(WrongDog& assign)
{
	std::cout << "WrongDog assignment operator called" << std::endl;
	if (this != &assign)
	{
		this->WrongAnimal::operator=(assign);
	}
	return *this;
}

WrongDog::~WrongDog()
{	
	std::cout << "WrongDog destructor called" << std::endl;
}

void WrongDog::makeSound() const
{
	std::cout << "WrongWoof WrongWoof!!" << std::endl;
}
