/*
Proyecto Programacion Orientada a clase loadout
Josemaria De Alba Arguelles
A01706847
01/06/2024
*/

#ifndef LOADOUT_H
#define LOADOUT_H

#include <string>
#include <sstream>
#include <stdlib.h>
#include "weapon.h"

class Loadout{
  private:
    Weapon *loadout[3];
    int num_of_weapons{3};
  public:
    void default_loadout();
    void print_loadout();
};

void Loadout::default_loadout(){
  loadout[0] = new Exotic("Ace of Spades", "Handcannon", 13, true, 
    "Memento Mori", "Funeral Pyre");
  loadout[1] = new Legendary("Long Arm", "Scout Riffle", 14, true, 
    "Tex Balanced Stock", "Range");
  loadout[2] = new Legendary("Hammerhead", "Machine Gun", 70, false, 
    "Indominability", "Reload Speed");
}

void Loadout::print_loadout(){
  for (int i = 0; i < num_of_weapons; i++){
      loadout[i] -> print_stats();
  }
}


#endif