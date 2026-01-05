#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal()
{
	Animal::type = "Dog";
	brain = new Brain;
	
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& src): Animal()
{
	type = src.type;
	brain = new Brain;
	*brain = *src.brain;

	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& assign)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &assign)
	{
		this->Animal::operator=(assign);
		Brain* newBrain = new Brain(*assign.brain); // Puede lanzar una excepcion, y salir de la funcion
		delete brain;
		brain = newBrain;
	}
	return *this;
}

Dog::~Dog()
{	
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof!!" << std::endl;
}

Brain* Dog::getBrain() const
{
	return brain;
}