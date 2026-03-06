#include "../include/animal.hpp"
#include "../include/cat.hpp"
#include "../include/dog.hpp"
#include "../include/wrongAnimal.hpp"
#include "../include/wrongCat.hpp"

int	main(void)
{

	Cat	gato;
	gato.makeSound();
	for (int i = 0; i < 10; i++)
		gato.getBrain()->setIdea(i, "eat tuna");
	for (int i = 0; i < 10; i++)
		std::cout << gato.getBrain()->getIdea(i) << "\n";
	//show deep copy
	Cat	garfield;
	garfield = gato;
	for (int i = 0; i < 10; i++)
		std::cout << garfield.getBrain()->getIdea(i) << "\n";
	//other demonstration
	Cat	larry(gato);
	for (int i = 0; i < 10; i++)
		std::cout << larry.getBrain()->getIdea(i) << "\n";
}


// int
// main ()
// {
//   const Animal *meta = new Animal ();
//   const Animal *j = new Dog ();
//   const Animal *a = new Cat ();
//   const wrongAnimal *beta = new wrongAnimal ();
//   std::cout << j->getType () << " " << std::endl;
//   std::cout << a->getType () << " "
//             << "\n";
//   a->makeSound ();
//   j->makeSound ();
//   meta->makeSound ();
//   beta->makeSound ();

//   Dog *dog = new Dog();
//   Cat *cat = new Cat();
  
//   dog->getBrain()->setIdea(0, "I love bones!");
//   dog->getBrain()->setIdea(1, "Woof is life!");
//   cat->getBrain()->setIdea(0, "I love mice!");
//   cat->getBrain()->setIdea(1, "Sleeping is best!");
  
//   std::cout << "Dog idea 0: " << dog->getBrain()->getIdea(0) << std::endl;
//   std::cout << "Cat idea 0: " << cat->getBrain()->getIdea(0) << std::endl;

//   delete dog;
//   delete cat;
//   delete beta;
//   delete meta;
//   delete j;
//   delete a;
//   return 0;
// }
