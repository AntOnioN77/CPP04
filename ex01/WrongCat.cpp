#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	WrongAnimal::type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat& src) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
}

WrongCat& WrongCat::operator=(WrongCat& assign)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this != &assign)
	{
		this->WrongAnimal::operator=(assign);
	}
	return *this;
}

WrongCat::~WrongCat()
{	
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongMeow!" << std::endl;
}
