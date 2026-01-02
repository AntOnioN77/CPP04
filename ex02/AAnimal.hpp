#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

// Clase abstracta
class AAnimal
{
protected:
	std::string type;
public:
	AAnimal();
	AAnimal(const AAnimal& src);
	AAnimal& operator=(const AAnimal& assign);
	virtual ~AAnimal();
	// Additional member functions
	virtual void makeSound() const = 0; // Pure virtual function
	std::string getType() const;
};

#endif