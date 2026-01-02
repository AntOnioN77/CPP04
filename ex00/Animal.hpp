#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class AAnimal
{
protected:
	std::string type;
public:
	AAnimal();
	AAnimal(AAnimal& src);
	AAnimal& operator=(AAnimal& assign);
	virtual ~AAnimal();
	// Additional member functions
	virtual void makeSound() const;
	std::string getType() const;
};

#endif