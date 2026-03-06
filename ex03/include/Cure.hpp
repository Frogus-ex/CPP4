#pragma once
#include "Amateria.hpp"
#include <iostream>
#include <string>

class Cure : public AMateria
{
protected:
  std::string _type;

public:
  Cure ();
  ~Cure ();
  Cure (const Cure &copy);
  Cure &operator= (const Cure &other);
  std::string const &getType () const;
  Cure *clone () const;
  void use (ICharacter &target);
};
