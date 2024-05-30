/*
Proyecto Programacion Orientada a Objetos main
Josemaria De Alba Arguelles
A01706847
22/05/2024
*/

#include <iostream>
#include <stdlib.h>

#include "weapon.h"

using namespace std;

int main() {
  //Todos estos son para probar que funcionen las funciones
  Weapon gun{};
  gun.print_stats();
  
  Exotic quicksilver("Quicksilver", "Auto-Rifle", 50, true,"Rocket Tracers", "Nano-Entanglement");
  quicksilver.print_stats();

  Legendary ikelos_sg("IKELOS_SG_v1.0.3", "Shotgun", 8, false, "Rasputins Arsenal", "Reload");
  ikelos_sg.print_stats();
  
  //Pruebas Polimorfismo
  Weapon *poliweapon = new Weapon();
  poliweapon->print_stats();
  poliweapon->characteristics();
  
  Weapon *navigator = new Exotic("Protective Weave","Not Found");
  navigator->print_stats();
  navigator->setName("Navigator");
  navigator->characteristics();

  Weapon *indebted_kindness = new Legendary("Indebted Kindness", "Rocket-Assisted Frame", "Stability");
  indebted_kindness->print_stats();
  indebted_kindness->characteristics();
}
