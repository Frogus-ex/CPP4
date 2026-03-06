#include "../include/brain.hpp"
#include "../include/dog.hpp"

Dog::Dog ()
{
  std::cout << "Dog default constructor called\n";
  _type = "Dog";
  _dogBrain = new Brain;
}

Dog::~Dog ()
{
  std::cout << "Dog destructor called\n";
  delete _dogBrain;
}

Dog::Dog (const Dog &copy)
{
  std::cout << "Dog copy assignment called\n";
  _type = copy._type;
  _dogBrain = new Brain;
  *this = copy;
}

Dog &
Dog::operator= (const Dog &other)
{
  std::cout << "Dog operator overload called\n";
  if (this != &other)
    {
      _type = other._type;
      *_dogBrain = *other._dogBrain;
    }
  return (*this);
}

void
Dog::makeSound () const
{
  std::cout << "WOOOOOOOF !\n";
}

Brain* Dog::getBrain() const { return _dogBrain; }
