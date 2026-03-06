#include "../include/brain.hpp"

Brain::Brain () { std::cout << "Brain default constructor called\n"; }

Brain::~Brain () { std::cout << "Brain destructor called\n"; }

Brain::Brain (const Brain &copy)
{
  std::cout << "Brain copy assignment called\n";
  *this = copy;
}

Brain &
Brain::operator= (const Brain &other)
{
  std::cout << "Brain operator overload called\n";
  if (this != &other)
    {
      for (int i = 0; i < 100; i++)
        _ideas[i] = other._ideas[i];
    }
  return (*this);
}

void Brain::setIdea(int index, const std::string &idea)
{
  if (index >= 0 && index < 100)
      _ideas[index] = idea;
  else
    std::cout << "brain cannot contain this many ideas\n";
}

std::string Brain::getIdea(int index)
{
    return (_ideas[index]);
}
