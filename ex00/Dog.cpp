#include "Dog.hpp"

Dog::Dog(): AAnimal()
{
	AAnimal::type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog& src): AAnimal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog& Dog::operator=(Dog& assign)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &assign)
	{
		this->AAnimal::operator=(assign);
	}
	return *this;
}

Dog::~Dog()
{	
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof!!" << std::endl;
}
