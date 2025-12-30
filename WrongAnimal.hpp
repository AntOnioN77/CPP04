#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal& src);
	WrongAnimal& operator=(WrongAnimal& assign);
	~WrongAnimal();
	// Additional member functions
	void makeSound() const;
	std::string getType() const;
};

#endif