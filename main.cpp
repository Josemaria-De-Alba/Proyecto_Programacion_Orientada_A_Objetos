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
  //Todos estos son para probar que funcionen las funciones
  
  Exotic quicksilver("Quicksilver", "Auto-Rifle", 50, true,"Rocket Tracers", "Nano-Entanglement");
  quicksilver.characteristics();

  Legendary ikelos_sg("IKELOS_SG_v1.0.3", "Shotgun", 8, false, "Rasputins Arsenal", "Reload");
  ikelos_sg.characteristics();
  
  
  //Pruebas Polimorfismo
  
  Weapon *navigator = new Exotic("Protective Weave","Not Found");
  navigator->set_name("Navigator");
  navigator->print_stats();
  navigator->characteristics();

  Weapon *indebted_kindness = new Legendary("Indebted Kindness", "Rocket-Assisted Frame", "Stability");
  indebted_kindness->print_stats();
  indebted_kindness->characteristics();

  //Demostracion de Loadout con default_loadout y change_loadout ya llenado
  Loadout loadout;
  loadout.default_loadout();
  loadout.print_loadout();

  loadout.change_loadout("Lament", "Sword", 1, false);
  loadout.print_loadout();
}
