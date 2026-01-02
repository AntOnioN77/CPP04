#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): AAnimal()
{
	AAnimal::type = "Cat";
	brain = new Brain;

	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& src) : AAnimal(src)
{
	brain = new Brain;
	*brain = *src.brain;

	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& assign)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &assign)
	{
		this->AAnimal::operator=(assign);
		Brain* newBrain = new Brain(*assign.brain);
		delete brain;
		brain = newBrain;
	}
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

Brain* Cat::getBrain() const
{
	return brain;
}
