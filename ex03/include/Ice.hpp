#pragma once
#include "Amateria.hpp"
#include <iostream>
#include <string>

class Ice : public AMateria
{
protected:
  std::string _type;

public:
  Ice ();
  ~Ice ();
  Ice (const Ice &copy);
  Ice &operator= (const Ice &other);
  Ice *clone () const;
  std::string const &getType () const;
  void use (ICharacter &target);
};
