#include "Cat.hpp"

Cat::Cat(): AAnimal()
{
	AAnimal::type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat& src) : AAnimal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat& Cat::operator=(Cat& assign)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &assign)
	{
		this->AAnimal::operator=(assign);
	}
	return *this;
}

Cat::~Cat()
{	
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
