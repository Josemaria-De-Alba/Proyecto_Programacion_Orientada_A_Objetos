/*
Proyecto Programacion Orientada a Objetos main
Josemaria De Alba Arguelles
A01706847
22/05/2024
*/

#include <iostream>
#include <stdlib.h>

#include "weapon.h"
#include "loadout.h"

using namespace std;

int main() { 
  //Pruebas Polimorfismo / Utilizados para demostracion  
  Weapon *navigator = new Exotic("Protective Weave","Not Found");
  navigator->set_name("Navigator");

  Weapon *indebted_kindness = new Legendary("Indebted Kindness", "Rocket-Assisted Frame", "Stability");

  //Demostracion de Loadout con default_loadout y change_loadout ya llenado
  Loadout loadout;
  loadout.default_loadout();
  
  int select(0);
  string name_m;
  string type_m;
  int mag_size_m;
  bool inf_ammo_m;
  cout << "Welcome to the Destiny Loadout Editor" << endl;
  while (select!=4){
    cout << "What would you like to do?" << endl;
    cout << "Press 1 to edit loadout" << endl;
    cout << "Press 2 to view loadout" << endl;
    cout << "Press 3 to view general weapon characterisitcs" << endl;
    cout << "Press 4 to close the program" << endl;
    cin >> select;
    if (select==1){
      cout << "What is the weapon name?" << endl;
      cin >> name_m;
      cout << "What is the weapon type?" << endl;
      cin >> type_m;
      cout << "What is the magazine size?" << endl;
      cin >> mag_size_m;
      cout << "Does the weapon have infinite ammo?" << endl;
      cout << "Type 0 for false" << endl << "Type 1 for True" << endl;
      cin >> inf_ammo_m;
      loadout.change_loadout(name_m, type_m, mag_size_m, inf_ammo_m);
    }
    if (select==2){
      loadout.print_loadout();
    }
    if (select==3){
      cout << "For simplicity we will use two pre-loaded weapons" << endl;
      cout << "These weapons are The Navigator, and Indebted Kindness" << endl;
      navigator->characteristics();
      indebted_kindness->characteristics();
    }
  }
  cout << "Thank you for using the Destiny Loadout Editor" << endl;
}
