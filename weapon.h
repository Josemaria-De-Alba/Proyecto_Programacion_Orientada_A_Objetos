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
    Weapon(): name("Weapon"), type("Gun"), mag_size(20), inf_ammo(true), 
rarity("???"){};
    Weapon(string na);
    Weapon(string na, string ty);
    Weapon(string na, string ty, int mag, bool inf);
    Weapon(string na, string ty, int mag, bool inf, string rare);


/*
Modificador de aceso get para nombre
@param
@return string con el nombre de weapon
*/
    string get_name(){
       return name;
    }
/*
Modificador de aceso set para nombre
@param string para nombre de weapon
@return
*/
    void set_name(string na){
      name=na;
    }


/*
Modificador de aceso get para tipo de arma
@param
@return string con el type de weapon
*/
    string get_type(){
      return type;
    }
      
/*
Modificador de aceso set para tipo de arma
@param string para type de weapon
@return
*/
    void set_type(string ty){
      type=ty;
    }

/*
Modificador de aceso get para mag_size
@param
@return int con el tamaño de mag
*/
    int get_mag_size(){
      return mag_size;
    }

/*
Modificador de aceso set para mag_size
@param int con el tamaño de mag
@return
*/
    void set_mag_size(int mag){
      mag_size=mag;
    }

/*
Modificador de aceso get para si el arma tiene municion infinita
@param
@return bool si el arma tiene balas infinitas o no
*/
    bool get_inf_ammo(){
      return inf_ammo;
    }
      
/*
Modificador de aceso set para si el arma tiene municion infinia
@param bool si el arma tiene balas infinitas o no
@return
*/
    void set_inf_ammo(bool inf){
      inf_ammo=inf;
    }

/*
Modificador de aceso get para nivel de rareza
@param
@return string con el rarity del weapon
*/
    string get_rarity(){
      return rarity;
    }

/*
Modificador de aceso set para tipo de arma
@param string con el rarit del weapon
@return
*/
    void set_rarity(string rare){
      rarity=rare;
    }

    virtual void print_stats()=0;
    virtual void characteristics()=0;
};

//Constructores clase madre
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

//Classe Hijo: Exotic Weapon

class Exotic: public Weapon {
  private:
    string exotic_perk;
    string catalyst;
  public:
    Exotic(): Weapon("Exotic_Weapon", "Gun", 20, true, "Exotic"),
      exotic_perk("Perk"),catalyst("Cat"){};

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
    Exotic(string na, string ty, int mag, bool inf, string perk):
Weapon(na, ty, mag, inf){
      rarity = "Exotic";
      exotic_perk=perk;
      catalyst="Not Found/Not Available";
    };

    Exotic(string na, string ty, int mag, bool inf, string perk, string cat):
Weapon(na, ty, mag, inf){
      rarity = "Exotic";
      exotic_perk=perk;
      catalyst=cat;
    };
/*
Modificador de aceso get para exotic_perk
@param
@return string con el nombre del exotic_perk
*/
  string get_exotic_perk(){
   return exotic_perk; 
  }

/*
Modificador de aceso set para exotic_perk
@param string con el nombre del exotic perk
@return
*/
  void set_exotic_perk(string perk){
    exotic_perk=perk;
  }
/*
Modificador de aceso get para catalyst
@param
@return string con el nombre del catalyst
*/
  string get_catalyst(){
    return catalyst;
  }

/*
Modificador de aceso set para catalyst
@param string con el nombre del catalyst
@return
*/
  void set_catalyst(string cat){
    catalyst=cat;
  }
  void print_stats();
  void characteristics();

};

/*
Funcion para imprimir datos de una arma exotic 
Tiene dos variables unicas: exotic_perk y catalyst
@param
@return
*/
void Exotic::print_stats(){
  cout << "Name: " << name << endl;
  cout << "Type: " << type << endl;
  cout << "Ammo in Magazine: " << mag_size << endl;
  cout << "Does it have infinte ammo:" << inf_ammo << endl;
  cout << "Rarity: " << rarity << endl;
  cout << "Exotic Perk: " << exotic_perk << endl;
  cout << "Catalyst: " << catalyst << endl << endl;
} 

/*
Imprime las characteristicas principales de una arma exotic
Explica que tiene de diferencia una arma exotic comparada con otras arms
@param
@return
*/
void Exotic::characteristics(){
  cout << "Name: " << name << endl;
  cout << "Exotic Perk: " << exotic_perk << endl;
  cout << "Catalyst: "<< catalyst << endl << endl;
  cout << "Exotic weapons are some of the most powerfull weapons that a ";
  cout << "guardian can poses. They do increased damage to all oponents.";
  cout << "They also poses two unique perks:" << endl << endl;
  cout << "-Exotic perks are the main thing that sets exotic weapons apart,";
  cout << "they give weapons unique abilities such as making enemies explode";
  cout << "when they die or giving you the ability to levitate when ";
  cout << "you shoot." << endl << endl;
  
  cout << "-Catalysts are an extra source of power that can make exotics ";
  cout << "even more efective. They can make a weak weapon extremely ";
  cout << "powerful. However they need to be earned. First you need to find ";
  cout << "them, then complete a certain objective in order to be able to ";
  cout << "use them. They take time, not all weapons have them, ";
  cout << "but its always beter to have them." << endl << endl;
}

//Clase Hijo: Legendary Weapon


class Legendary: public Weapon {
  private:
    string intrinsic_trait;
    string masterwork;
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

/*
Modificador de aceso get para intrinsic_trait
@param
@return string con el nombre del intrinsic_trait
*/
  string get_intrinsic_trait(){
    return intrinsic_trait;
  }

/*
Modificador de aceso set para intrinsic_trait
@param string con el nombre del intrinsic_trait
@return
*/
  void set_intrinsic_trait(string trait){
    intrinsic_trait=trait;
  }

/*
Modificador de aceso get para masterwork
@param
@return string con el nombre del masterwork
*/
  string get_masterwork(){
    return masterwork;
  }

/*
Modificador de aceso set para masterwork
@param string con el nombre del masterwork
@return
*/
  void set_masterwork(string master){
    masterwork=master;
  }

  void print_stats();
  void characteristics();
};


/*
Funcion para imprimir datos de una arma legendary
Tiene dos variables unicas: intrinsic_trait y masterwork
@param
@return
*/
void Legendary::print_stats(){
  cout << "Name: " << name << endl;
  cout << "Type: " << type << endl;
  cout << "Ammo in Magazine: " << mag_size << endl;
  cout << "Does it have infinte ammo:" << inf_ammo << endl;
  cout << "Rarity: " << rarity << endl;
  cout << "Intrinsic Trait: " << intrinsic_trait << endl;
  cout << "Masterwork: " << masterwork << endl << endl;
} 

/*
Imprime las characteristicas principales de una arma legendary
Explica que tiene de diferencia una arma legendary comparada con otras arms
@param
@return
*/
void Legendary::characteristics(){
  cout << "Name: " << name << endl;
  cout << "Intrinsic Trait: " << intrinsic_trait << endl;
  cout << "Masterwork: "<< masterwork << endl << endl;
  cout << "Legendary weapons are what most guardians use." << endl;
  cout << "They are more standard weapons." << endl;
  cout << "They differ from exotic weapons since legendaries can have ";
  cout << "different perks each time you aquire them." << endl;
  cout << "They also have an intrinsic trait which they often share ";
  cout << "with other weapons of the same set." << endl << endl;
  
  cout << "They also have a masterwork which is a random stat increase ";
  cout << "for the weapon. This is a masterwork." << endl;
  cout << "It can boost handling, reaload, range, etc. Even if legendary ";
  cout << "weapons don´t have the same benefits as exoticts, they can ";
  cout << "still be powerful. However they are more random and it can take ";
  cout << "some time to get the perks and masterwork you want to get an ";
  cout << "exact roll."<< endl << endl;
}
#endif
