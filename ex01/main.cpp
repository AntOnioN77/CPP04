#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "Animal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

/* int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
} */

/* int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Brain* i_brain = ((Cat*) i)->getBrain();
	i_brain->setIdea(0, "Mices are yummy!");

	std::cout << "Original cat idea[0] (esperado: Mices are yummy!): " << i_brain->getIdea(0) << std::endl;

	// Prueba de copia profunda para Cat 
	// Copy constructor: la copia debe mantener la idea anterior aunque se modifique el original
	std::cout << "----Copy constructor test (Cat)----" << std::endl;
	Cat* originalCat = (Cat*)i;
	Cat cat_copy = *originalCat;
	Brain* copy_brain = cat_copy.getBrain();
	// Modificamos el original después de crear la copia
	originalCat->getBrain()->setIdea(0, "Oh, a ball of yarn!");
	std::cout << "copy cat idea[0] (esperado: Mices are yummy!, obtenido): " << copy_brain->getIdea(0) << std::endl;
	std::cout << "original cat idea[0] (modificado) (esperado: Oh, a ball of yarn!, obtenido): " << originalCat->getBrain()->getIdea(0) << std::endl;

	// Assignation operator: la asignación debe copiar el estado actual del original
	std::cout << "----Assignation operator test (Cat)----" << std::endl;
	Cat cat_assign;
	cat_assign = *originalCat; // copia la idea actual ("Oh, a ball of yarn!")
	Brain* assign_brain = cat_assign.getBrain();
	// Cambiamos el original otra vez y comprobamos que la copia no cambia
	originalCat->getBrain()->setIdea(0, "I will catch this bug!");
	std::cout << "assign cat idea[0] (esperado: Oh, a ball of yarn!, obtenido): " << assign_brain->getIdea(0) << std::endl;
	std::cout << "original cat idea[0] (modificado) (esperado: I will catch this bug!, obtenido): " << originalCat->getBrain()->getIdea(0) << std::endl;

	// Pruebas equivalentes para Dog 
	std::cout << "----DOG: Deep copy tests----" << std::endl;
	Dog* originalDog = (Dog*)j;
	Brain* j_brain = originalDog->getBrain();
	j_brain->setIdea(0, "Chasing squirrels!");
	std::cout << "Original dog idea[0] (esperado: Chasing squirrels!): " << j_brain->getIdea(0) << std::endl;

	// Copy constructor for Dog
	std::cout << "----Copy constructor test (Dog)----" << std::endl;
	Dog dog_copy = *originalDog;
	Brain* copy_dog_brain = dog_copy.getBrain();
	originalDog->getBrain()->setIdea(0, "I dig holes!");
	std::cout << "copy dog idea[0] (esperado: Chasing squirrels!, obtenido): " << copy_dog_brain->getIdea(0) << std::endl;
	std::cout << "original dog idea[0] (modificado) (esperado: I dig holes!, obtenido): " << originalDog->getBrain()->getIdea(0) << std::endl;

	// Assignation operator for Dog
	std::cout << "----Assignation operator test (Dog)----" << std::endl;
	Dog dog_assign;
	dog_assign = *originalDog; // copia la idea actual ("I dig holes!")
	Brain* assign_dog_brain = dog_assign.getBrain();
	originalDog->getBrain()->setIdea(0, "I will fetch that ball!");
	std::cout << "assign dog idea[0] (esperado: I dig holes!, obtenido): " << assign_dog_brain->getIdea(0) << std::endl;
	std::cout << "original dog idea[0] (modificado) (esperado: I will fetch that ball!, obtenido): " << originalDog->getBrain()->getIdea(0) << std::endl;

	delete j;//should not create a leak
	delete i;

	return 0;
}*/

int	main(void)
{
	//subject example:
	const Animal* j = new Dog();
	const Animal* i = new Cat();


	delete j;//should not create a leak
	delete i;

	//array cat/dog requiried:
	Animal* arr_anim[10];

	for (int i = 0; i <10; i+=2)
	{
		arr_anim[i] = new Dog;
		arr_anim[i+1] = new Cat;
	}

	for (int i = 0; i <10; i++)
	{
		arr_anim[i]->makeSound();
	}

	for (int i = 0; i<10; i++)
	{
		delete arr_anim[i];
	}

	return 0;
}