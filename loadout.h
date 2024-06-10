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
    void change_loadout(string na, string ty, int mag, bool inf);
};


/*
Crea un loadout default para hacer más facil el uso de la funcion
recibe: nada
devuelve: nada
*/
void Loadout::default_loadout(){
  loadout[0] = new Exotic("Ace of Spades", "Handcannon", 13, true, 
    "Memento Mori", "Funeral Pyre");
  loadout[1] = new Legendary("Long Arm", "Scout Riffle", 14, true, 
    "Tex Balanced Stock", "Range");
  loadout[2] = new Legendary("Hammerhead", "Machine Gun", 70, false, 
    "Indominability", "Reload Speed");
}

/*
Imprime todas las stats para todas las armas en loadout sin importar que
sea exotic o legendary.
recibe: nada
devuelve: nada
*/

void Loadout::print_loadout(){
  for (int i = 0; i < num_of_weapons; i++){
      loadout[i] -> print_stats();
  }
}

/*
Fucnion para cambiar alguna de las armas dentro de el loadout
Recibe el nombre del arma, el tipo, cuantas balas tiene, y si tiene 
balas infinitas.
Dentro del programa te pregunta si es legendaria o exotica y 
te deja agregar escoger sus variables exclusivas y en que posicion del
loadout va.
recibe: string name, string type, int magazine_size, bool inf_ammo
devuelve: nada
*/
void Loadout::change_loadout(string na, string ty, int mag, bool inf){
  int i;
  int r;
  
  string e_perk;
  string cat;
  string trait;
  string master;

  
  cout << "What weapon do you want to change" << endl;
  cout << "Primariy Press 0, Secondary Press 1, Heavy Press 2" << endl;
  cin >> i;

  if (i>2){
    cout << "Incorrect parameters! Code might not work as expected!" << endl;
  }
  
  cout << "Is the weapon legendary or exotic?" << endl;
  cout << "Legendary Press 1, Exotic Press 2" << endl;
  cin >> r;

  if (r!=2 and r!=1){
    cout << "Incorrect parameters! Code might not work as expected!" << endl;
  }
  
  
  if (r == 2){
    cout << "What is the exotic perk? Write as 1 word" << endl;
    cin >> e_perk;
    cout << "What is the exotic catalyst? Write as 1 word" << endl;
    cin >> cat;
    loadout[i] = new Exotic(na, ty, mag, inf, e_perk, cat);
  }
  
  if (r == 1){
    cout << "What is the Intrinsic Trait? Write as 1 word" << endl;
    cin >> trait;
    cout << "What is the Masterwork? Write as 1 word" << endl;
    cin >> master;
    loadout[i] = new Legendary(na, ty, mag, inf, trait, master);
  }
}


#endif
