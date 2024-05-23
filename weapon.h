/*
Proyecto Programacion Orientada a Objetos clase weapon
Josemaria De Alba Arguelles
A01706847
21/05/2024
*/

#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <sstream>
#include <stdlib.h>

using namespace std;

class Weapon{
  protected:
    string name;
    string type;
    int mag_size;
    bool inf_ammo;
    string rarity;
  public:
    Weapon(): name("Weapon"), type("Gun"), mag_size(20), inf_ammo(true), rarity("???"){};
    Weapon(string na, string ty);
    Weapon(string na, string ty, int mag, bool inf);
    Weapon(string na, string ty, int mag, bool inf, string rare);

    string getName()const{
       return name;
     }
    void setName(string na){
      name=na;
    }


    string getType()const{
      return type;
    }
    void setType(string ty){
      type=ty;
    }


    int getMag_Size()const{
      return mag_size;
    }
    void setMag_Size(int mag){
      mag_size=mag;
    }


    bool getInf_Ammo()const{
      return inf_ammo;
    }
    void setInf_Ammo(bool inf){
      inf_ammo=inf;
    }

    string getRarity()const{
      return rarity;
    }
    void setRarity(string rare){
      rarity=rare;
    }

    void print_stats();
};

Weapon::Weapon(string na, string ty){
  name=na;
  type=ty;
  mag_size=20;
  inf_ammo=true;
  rarity="Undifined";
}

Weapon::Weapon(string na, string ty, int mag, bool inf){
  name=na;
  type=ty;
  mag_size=mag;
  inf_ammo=inf;
  rarity="Undefined";
}

Weapon::Weapon(string na, string ty, int mag, bool inf, string rare){
  name=na;
  type=ty;
  mag_size=mag;
  inf_ammo=inf;
  rarity=rare;
}

void Weapon::print_stats(){
  cout << "Name: " << name << endl;
  cout << "Type: " << type << endl;
  cout << "Ammo in Magazine: " << mag_size << endl;
  cout << "Does it have infinte ammo:" << inf_ammo << endl;
  cout << "Rarity: " << rarity << endl << endl;
}

//Classe Hijo: Exotic Weapon

class Exotic: public Weapon {
  private:
    string exotic_perk;
    string catalyst;
  public:
    Exotic(): Weapon("Exotic_Weapon", "Gun", 20, true, "Exotic"),exotic_perk("Perk"),catalyst("Cat"){};

    Exotic(string na, string ty, int mag, bool inf, string perk):Weapon(na, ty, mag, inf){
      rarity = "Exotic";
      exotic_perk=perk;
      catalyst="Not Found/Not Available";
    };

    Exotic(string na, string ty, int mag, bool inf, string perk, string cat):Weapon(na, ty, mag, inf){
      rarity = "Exotic";
      exotic_perk=perk;
      catalyst=cat;
};

  string get_Exotic_Perk()const;
  void set_Exotic_Perk(string perk){
    exotic_perk=perk;
  }

  string get_Catalyst()const;
  void set_Catalyst(string cat){
    catalyst=cat;
  }
  void print_stats();
};

string Exotic::get_Exotic_Perk()const{
  return exotic_perk;
}

string Exotic::get_Catalyst()const{
  return catalyst;
}

void Exotic::print_stats(){
  cout << "Name: " << name << endl;
  cout << "Type: " << type << endl;
  cout << "Ammo in Magazine: " << mag_size << endl;
  cout << "Does it have infinte ammo:" << inf_ammo << endl;
  cout << "Rarity: " << rarity << endl;
  cout << "Exotic Perk: " << exotic_perk << endl;
  cout << "Catalyst: " << catalyst << endl << endl;
} 

//Clase Hijo: Legendary Weapon


class Legendary: public Weapon {
  private:
    string intrinsic_trait;
    string masterwork;
    //Agrega masterwork Level!!!
  public:
    Legendary(): Weapon("Legendary_Weapon", "Gun", 20, true, "Legendary"), intrinsic_trait("Intrinsic"), masterwork("Masterwork"){};
    Legendary(string na, string ty, int mag, bool inf,  string trait): Weapon(na, ty, mag, inf){
      rarity="Legendary";
      intrinsic_trait=trait;
      masterwork="Unkown";
    };
    Legendary(string name, string type, int mag_size, bool inf_mag,  string trait, string master): Weapon(name, type, mag_size, inf_mag), intrinsic_trait(trait), masterwork(master){
      rarity="Legendary";
      intrinsic_trait=trait;
      masterwork=master;
    };

  string get_Intrinsic_Trait()const;
  void set_Intrinsic_Trait(string trait){
    intrinsic_trait=trait;
  }
  string get_Masterwork()const;
  void set_Masterwork(string master){
    masterwork=master;
  }

  void print_stats();
};

string Legendary::get_Intrinsic_Trait()const{
  return intrinsic_trait;
}

string Legendary::get_Masterwork()const{
  return masterwork;
}

void Legendary::print_stats(){
  cout << "Name: " << name << endl;
  cout << "Type: " << type << endl;
  cout << "Ammo in Magazine: " << mag_size << endl;
  cout << "Does it have infinte ammo:" << inf_ammo << endl;
  cout << "Rarity: " << rarity << endl;
  cout << "Intrinsic Trait: " << intrinsic_trait << endl;
  cout << "Masterwork: " << masterwork << endl << endl;
} 

#endif