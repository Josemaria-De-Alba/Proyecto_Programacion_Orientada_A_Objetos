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
  Weapon gun2("Shotgun", "Short Range");
  gun2.print_stats();
  Weapon gun3("Sniper", "Long Range", 5, true, "Rare");
  gun3.print_stats();

  Exotic exotic_default{};
  exotic_default.print_stats();

  Exotic final_warning("Final Warning", "Sidearm", 20, true ,"Pick Your Poison");
  final_warning.print_stats();

  Exotic quicksilver("Quicksilver", "Auto-Rifle", 50, true,"Rocket Tracers", "Nano-Entanglement");
  quicksilver.print_stats();

  Legendary legendary_default{};
  legendary_default.print_stats();

  Legendary mountaintop("Mountaintop", "Grenade Launcher", 1, false, "Indomitability");
  mountaintop.print_stats();

  Legendary iklos_sg("IKELOS_SG_v1.0.3", "Shotgun", 8, false, "Rasputins Arsenal", "Reload");
  iklos_sg.print_stats();

}