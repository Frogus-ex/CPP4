#include "../include/animal.hpp"
#include "../include/cat.hpp"
#include "../include/dog.hpp"
#include "../include/wrongAnimal.hpp"
#include "../include/wrongCat.hpp"

int
main ()
{
  const Animal *meta = new Animal ();
  const Animal *j = new Dog ();
  const Animal *i = new Cat ();
  const wrongAnimal *a = new wrongCat ();
  const wrongAnimal *beta = new wrongAnimal ();
  std::cout << j->getType () << " " << std::endl;
  std::cout << i->getType () << " " << std::endl;
  std::cout << a->getType () << " " << "\n";
  a->makeSound ();
  i->makeSound (); // will output the cat sound!
  j->makeSound ();
  meta->makeSound ();
  beta->makeSound();
  
  delete beta;
  delete meta;
  delete j;
  delete i;
  delete a;
  return 0;
}
