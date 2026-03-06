#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource ()
{
  for (int i = 0; i < 4; i++)
    _slot[i] = NULL;
}

MateriaSource::~MateriaSource ()
{
  for (int i = 0; i < 4; i++)
    delete _slot[i];
}

MateriaSource::MateriaSource (const MateriaSource &copy)
{
  for (int i = 0; i < 4; i++)
    _slot[i] = NULL;
  *this = copy;
}

MateriaSource &
MateriaSource::operator= (const MateriaSource &other)
{
  if (this != &other)
    {
      for (int i = 0; i < 4; i++)
        {
          if (_slot[i])
            delete _slot[i];
          if (other._slot[i])
            _slot[i] = other._slot[i]->clone ();
          else
            _slot[i] = NULL;
        }
    }
  return *this;
}

void
MateriaSource::learnMateria (AMateria *ptr)
{
  for (int i = 0; i < 4; i++)
    {
      if (!_slot[i])
        {
          _slot[i] = ptr;
          return;
        }
    }
  delete ptr;
}

AMateria *
MateriaSource::createMateria (std::string const &type)

{
  for (int i = 0; i < 4; i++)
    {
      if (_slot[i] != 0 && _slot[i]->getType () == type)
        return (_slot[i]->clone ());
    }
  return (0);
}
