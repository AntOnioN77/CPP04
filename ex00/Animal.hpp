#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(Animal& src);
	Animal& operator=(Animal& assign);
	~Animal();
	// Additional member functions
	void makeSound() const;
	std::string getType() const;
};

#endif