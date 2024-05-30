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
    Weapon(string na);
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

    virtual void characteristics();
};

Weapon::Weapon(string na){
  name=na;
  type="Undefined";
  mag_size=1;
  inf_ammo=true;
  rarity="Undefined";
}
      
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

void Weapon::characteristics(){
  cout << "Name: " << name << endl;
  cout << "Weapons are your main way of fighting against the forces that endanger humanity and its allies." << endl;
  cout << "There are three main types of weapons: primary, special, and heavy. Be sure to pick your weapons wisley guardian." << endl << endl;
}

//Classe Hijo: Exotic Weapon

class Exotic: public Weapon {
  private:
    string exotic_perk;
    string catalyst;
  public:
    Exotic(): Weapon("Exotic_Weapon", "Gun", 20, true, "Exotic"),exotic_perk("Perk"),catalyst("Cat"){};

    Exotic(string perk, string cat){
      rarity="Exotic";
      exotic_perk=perk;
      catalyst=cat;
    };

    Exotic(string na, string perk, string cat):Weapon(na){
      rarity="Exotic";
      exotic_perk=perk;
      catalyst=cat;
    };
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
  void characteristics();

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
void Exotic::characteristics(){
  cout << "Name: " << name << endl;
  cout << "Exotic Perk: " << exotic_perk << endl;
  cout << "Catalyst: "<< catalyst << endl << endl;
  cout << "Exotic weapons are some of the most powerfull weapons that a guardian can poses. They do increased damage to all oponents. They also poses two unique perks:" << endl;
  cout << "-Exotic perks are the main thing that sets exotic weapons apart, they give weapons unique abilities such as making enemies explode when they die or giving you the ability to levitate when you shoot." << endl;
  cout << "-Catalysts are an extra source of power that can make exotics even more efective. They can make a weak weapon extremely powerful. However they need to be earned. First you need to find them, then complete a certain objective in order to be able to use them. They take time, not all weapons have them, but its always beter to have them." << endl << endl;
}

//Clase Hijo: Legendary Weapon


class Legendary: public Weapon {
  private:
    string intrinsic_trait;
    string masterwork;
    //Agrega masterwork Level!!!
  public:
    Legendary(): Weapon("Legendary_Weapon", "Gun", 20, true, "Legendary"), intrinsic_trait("Intrinsic"), masterwork("Masterwork"){};

    Legendary(string na, string trait, string master): Weapon(na){
      rarity="Legendary";
      intrinsic_trait=trait;
      masterwork=master;
    }

    Legendary(string na, string ty, int mag, bool inf,  string trait): Weapon(na, ty, mag, inf){
      rarity="Legendary";
      intrinsic_trait=trait;
      masterwork="Unkown";
    };

    Legendary(string na, string ty, int mag, bool inf,  string trait, string master): Weapon(na, ty, mag, inf){
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
  void characteristics();
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

void Legendary::characteristics(){
  cout << "Name: " << name << endl;
  cout << "Intrinsic Trait: " << intrinsic_trait << endl;
  cout << "Masterwork: "<< masterwork << endl << endl;
  cout << "Legendary weapons are what most guardians use, they are more standard weapons. They differ from exotic weapons since legendarys can have different perks each time you aquire them. They also have an intrinsic trait which they often share with other weapons of the same set." << endl;
  cout << "They also have a masterwork which is a random stat increase for the weapon. It can boost handling, reaload, range, etc. Even if legendary weapons don´t have the same benefits as exoticts, they can still be powerful. However they are more random and it can take some time to get the perks and masterwork you want to get an exact roll." << endl << endl;
}
#endif
