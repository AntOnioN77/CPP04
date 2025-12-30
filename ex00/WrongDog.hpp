#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include <string>
#include "WrongAnimal.hpp"

class WrongDog: public WrongAnimal
{
protected:
	std::string type;
public:
	WrongDog();
	WrongDog(WrongDog& src);
	WrongDog& operator=(WrongDog& assign);
	~WrongDog();
	// Additional member functions
	void makeSound() const;
};

#endif
