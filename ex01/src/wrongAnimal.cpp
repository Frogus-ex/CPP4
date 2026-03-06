#include "../include/wrongAnimal.hpp"

wrongAnimal::wrongAnimal ()
{
  std::cout << "wrongAnimal default constructor called\n";
}

wrongAnimal::wrongAnimal (std::string type)
{
  std::cout << "wrongAnimal constructor called\n";
  _type = type;
}

wrongAnimal::~wrongAnimal ()
{
  std::cout << "wrongAnimal destructor called\n";
}

wrongAnimal::wrongAnimal (const wrongAnimal &copy)
{
  std::cout << "wrongAnimal copy assignment called\n";
  *this = copy;
}

wrongAnimal &
wrongAnimal::operator= (const wrongAnimal &other)
{
  std::cout << "wrongAnimal operator overload called\n";
  if (this != &other)
    _type = other._type;
  return (*this);
}

std::string
wrongAnimal::getType () const
{
  return _type;
}

void
wrongAnimal::set_type (std::string type)
{
  _type = type;
}

void
wrongAnimal::makeSound () const
{
  std::cout << "ZGLURBLUX\n";
}
