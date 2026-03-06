#include "../include/AMateria.hpp"
#include "../include/Character.hpp"
#include "../include/Cure.hpp"
#include "../include/Ice.hpp"
#include "../include/MateriaSource.hpp"

int
main (void)
{
  IMateriaSource *src = new MateriaSource ();
  src->learnMateria (new Ice ());
  src->learnMateria (new Cure ());
  src->learnMateria (new Cure ());
  src->learnMateria (new Cure ());
  src->learnMateria (new Cure ()); // doit etre rejete car + de 4

  ICharacter *me = new Character ("me");

  AMateria *tmp;
  tmp = src->createMateria ("ice");
  me->equip (tmp);
  tmp = src->createMateria ("cure");
  me->equip (tmp);

  tmp = src->createMateria ("water"); // inexistant
  me->equip (tmp);                    // doit ne rien equiper

  tmp = src->createMateria ("cure");
  me->equip (tmp);
  tmp = src->createMateria ("cure");
  me->equip (tmp);
  tmp = src->createMateria ("cure");
  me->equip (tmp); // + de 4 slots

  me->unequip (3); // enleve cure
  me->unequip (3); // slot vide -> ok

  ICharacter *bob = new Character ("bob");

  me->use (0, *bob); // ice
  me->use (1, *bob); // cure
  me->use (3, *bob); // slot vide -> rien

  ICharacter *patrick = new Character (*(Character *)me);

  tmp = src->createMateria ("cure");
  patrick->unequip (0);   // enlever ice
  patrick->equip (tmp);   // ajouter cure
  patrick->use (0, *bob); // doit afficher cure au lieu de ice

  Character assignTest ("assign");
  assignTest = *(Character *)patrick;
  assignTest.use (0, *bob);

  delete bob;
  delete me;
  delete src;
  delete patrick;

  return 0;
}
