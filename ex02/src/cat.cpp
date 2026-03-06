#include "../include/cat.hpp"
#include "../include/brain.hpp"

Cat::Cat ()
{
  std::cout << "Cat default constructor called\n";
  _type = "Cat";
  _catBrain = new Brain;
}

Cat::~Cat ()
{
  std::cout << "Cat destructor called\n";
  delete _catBrain;
}

Cat::Cat (const Cat &copy)
{
  std::cout << "Cat copy assignment called\n";
  _catBrain = new Brain;
  *this = copy;
}

Cat &
Cat::operator= (const Cat &other)
{
  std::cout << "Cat operator overload called\n";
  if (this != &other)
    {
      _type = other._type;
      *_catBrain = *other._catBrain;
    }
  return (*this);
}

void
Cat::makeSound () const
{
  std::cout << "MEEEEOOOOOOW !\n";
}

Brain* Cat::getBrain() const { return _catBrain; }
