#include "../include/animal.hpp"
#include "../include/cat.hpp"
#include "../include/dog.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int	main(void)
{
	Animal	animal;
	animal.makeSound();
	std::cout << animal.getType() << "\n";

	Cat cat;
	cat.makeSound();
	std::cout << cat.getType() << "\n";

	Dog dog;
	dog.makeSound();
	std::cout << dog.getType() << "\n";

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j -> getType() << "\n";
	std::cout << i -> getType() << "\n";
	i -> makeSound();//cat sound
	j -> makeSound();
	meta -> makeSound();
	
	delete i;
	delete j;
	delete meta;

	std::cout << "ILLUSTRATION WRONG ANIMAL AND CAT\n";

	WrongAnimal wronganimal;
	wronganimal.makeSound();
	std::cout << wronganimal.getType() << "\n";

	WrongCat wrongcat;
	wrongcat.makeSound();
	std::cout << wrongcat.getType() << "\n";

	WrongAnimal *ptr = new WrongCat();
	std::cout << ptr -> getType() << "\n";
	ptr -> makeSound();
	
	delete ptr;

}
