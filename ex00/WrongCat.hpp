#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <string>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
protected:
	std::string type;
public:
	WrongCat();
	WrongCat(WrongCat& src);
	WrongCat& operator=(WrongCat& assign);
	~WrongCat();
	// Additional member functions
	void makeSound() const;
};

#endif
