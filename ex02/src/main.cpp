#include "../include/animal.hpp"
#include "../include/cat.hpp"
#include "../include/dog.hpp"
#include "../include/wrongAnimal.hpp"
#include "../include/wrongCat.hpp"

int
main ()
{
  Dog a;
  Cat j;
  const wrongAnimal *beta = new wrongAnimal ();
  std::cout << j.getType () << " " << std::endl;
  std::cout << a.getType () << " "
            << "\n";
  a.makeSound ();
  j.makeSound ();
  beta->makeSound ();

  Dog *dog = new Dog();
  Cat *cat = new Cat();
  
  dog->getBrain()->setIdea(0, "I love bones!");
  dog->getBrain()->setIdea(1, "Woof is life!");
  cat->getBrain()->setIdea(0, "I love mice!");
  cat->getBrain()->setIdea(1, "Sleeping is best!");
  
  std::cout << "Dog idea 0: " << dog->getBrain()->getIdea(0) << std::endl;
  std::cout << "Cat idea 0: " << cat->getBrain()->getIdea(0) << std::endl;

  delete dog;
  delete cat;
  delete beta;
  return 0;
}
