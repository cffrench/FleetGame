#ifndef FLEETGAME_H
#define FLEETGAME_H

#include <iostream>     //for standard input and output objects
#include <iomanip>      //for manipulating inputs and outputs (for example by changing the number of digits after the decimal point)
#include <string>       //for strings
#include <vector>       //vectors
#include <set>
#include <cstdlib>      //contatins several general purpose functions including binary search and random num generation
#include <cmath>        //contains a large number of basic math functions: notably exponents, trig, and rounding
#include <time.h>       //this is used for time management (which helps with random number generation)
#include <fstream>      //this allows for file opening and closing
#include <algorithm>    //this contains a large number of basic algorithms such as copy, minmax, and is_sorted
#include <random>       //Random
#include <Windows.h>    //for the sleep function
#include <thread>       //for time and sleep relating

using namespace std;

/* GLOBAL VARIABLES: */

const string VersionNumber = "0.01a";
const string VersionChanges = "Created";

class Ship {
    public:
        Ship();
        Ship(string, int, int, int, int, bool);
        void printShipInfo();
        string name;
        string manufacturer;
        double size;
        double sublightSpeed;
        double FTLSpeed;
        double maneuverability;
        double evasion;
        int minimumCrew;
        double storage;
        double fuelStorage;
        double sensorRange;
        double shields;
        double shieldRegen;
        vector <string> hardpointList;   
};

class Hardpoint {
    public:
        Hardpoint();
        Hardpoint(string, string, double, double, int);
        void printHardpointInfo();
        string name;
        string manufacturer;
        double hitPoints;
        double armor;
        int crewRequirement;

};

// inherits from Hardpoint
class Weapon : public Hardpoint {
    public:
        Weapon();
        Weapon(string, string, double, double, int, string, int, double, double, double, double, double);
        string weaponType;          //Energy weapons, knetic weapons, or whatever
        int numShots;               //Number of shots per volley.
        double fireRate;            //Number of volleys per second.
        double damagePerShot;       //Damage done before reductions to armor and shields.
        double accuracy;            //Chance to hit with each individual shot. 90% accuracy means you have a 90% chance to hit a target with 0% evasion.
        double tracking;            //Negates evasion. So if a weapon has 15 tracking it will subtract 15 from the evasion of the target to a minimum of 0.
        double armorPenetration;    //Reduces the effective armor damage reduction of the target.
        double range;               //The maximum range the weapon can be fired at.


};

Weapon readWeapon(string weaponString);
#endif