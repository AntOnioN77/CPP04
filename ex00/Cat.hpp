#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include "Animal.hpp"

class Cat: public AAnimal
{
protected:
	std::string type;
public:
	Cat();
	Cat(Cat& src);
	Cat& operator=(Cat& assign);
	~Cat();
	// Additional member functions
	void makeSound() const;
};

#endif
