#pragma once
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Character : public ICharacter
{
private:
  std::string _name;
  AMateria *_inventaire[4];
  AMateria *_floor[100];
  int _floorsize;

public:
  Character (const std::string& _name);
  ~Character ();
  Character (const Character &copy);
  Character &operator= (const Character &other);
  std::string const &getName () const;
  void setName (std::string name);
  void equip (AMateria *m);
  void unequip (int idx);
  void use (int idx, ICharacter &target);
};
