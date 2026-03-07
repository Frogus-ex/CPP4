#include "../include/Character.hpp"

Character::Character (const std::string &_name)
{
  this->_name = _name;
  _floorsize = 0;
  for (int i = 0; i < 4; i++)
    _inventaire[i] = NULL;
  for (int i = 0; i < 100; i++)
    _floor[i] = NULL;
}

Character::~Character ()
{
  for (int i = 0; i < 4; i++)
    {
      if (_inventaire[i])
        {
          delete _inventaire[i];
          _inventaire[i] = NULL;
        }
    }
  for (int i = 0; i < 100; i++)
    {
      if (_floor[i])
        {
          delete _floor[i];
          _floor[i] = NULL;
        }
    }
}

Character::Character (const Character &copy)
{
  for (int i = 0; i < 4; i++)
    _inventaire[i] = NULL;
  for (int i = 0; i < 100; i++)
    _floor[i] = NULL;
  _floorsize = 0;
  *this = copy;
}

Character &
Character::operator= (const Character &other)
{
  if (this != &other)
    {
      for (int i = 0; i < 4; i++)
        {
          if (_inventaire[i])
            {
              delete _inventaire[i];
              _inventaire[i] = NULL;
            }
        }
      for (int i = 0; i < 100; i++)
        {
          if (_floor[i])
            {
              delete _floor[i];
              _floor[i] = NULL;
            }
        }
      _floorsize = 0;
      _name = other._name;
      for (int i = 0; i < 4; i++)
        {
          if (other._inventaire[i])
            _inventaire[i] = other._inventaire[i]->clone ();
          else
            _inventaire[i] = NULL;
        }
      for (int i = 0; i < 100; i++)
        {
          if (other._floor[i])
            _floor[i] = other._floor[i]->clone ();
          else
            _floor[i] = NULL;
        }
      _floorsize = other._floorsize;
    }
  return (*this);
}

std::string const &
Character::getName () const
{
  return (_name);
}

void
Character::setName (std::string name)
{
  _name = name;
}

void
Character::equip (AMateria *m)
{
  if (!m)
    return;
  for (int i = 0; i < 4; i++)
    {
      if (!_inventaire[i])
        {
          _inventaire[i] = m;
          return;
        }
    }
  if (_floorsize < 100)
    {
      _floor[_floorsize] = m;
      _floorsize++;
    }
  else
      delete m;
}

void
Character::unequip (int idx)
{
  if (idx < 0 || idx > 3)
    return;
  if (_floorsize == 100)
    std::cout
        << "there is no more place on the floor please stop littering !\n";
  if (_floorsize < 100)
    {
      if (_inventaire[idx])
        {
          _floor[_floorsize] = _inventaire[idx];
          _inventaire[idx] = NULL;
          _floorsize++;
        }
    }
}

void
Character::use (int idx, ICharacter &target)
{
  if (idx < 0 || idx > 3)
    return;
  if (_inventaire[idx])
    _inventaire[idx]->use (target);
  else
    return;
}
