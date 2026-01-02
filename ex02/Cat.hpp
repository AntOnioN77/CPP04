#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
protected:
	std::string type;
private:
	Brain* brain;
public:
	Cat();
	Cat(const Cat& src);
	Cat& operator=(const Cat& assign);
	~Cat();
	// Additional member functions
	void makeSound() const;
	Brain* getBrain() const;

};

#endif
