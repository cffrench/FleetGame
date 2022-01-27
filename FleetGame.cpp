#include"FleetGame.h"

Hardpoint::Hardpoint() {
    
}

Hardpoint::Hardpoint(string nameParam, string manufacturerParam, double hpParam, double armorParam, int minCrewParam) {
    name = nameParam;
    manufacturer = manufacturerParam;
    hitPoints = hpParam;
    armor = armorParam;
    crewRequirement = minCrewParam;
}

Weapon::Weapon() {

}

Weapon::Weapon(string nameParam, string manufacturerParam, double hpParam, double armorParam, int minCrewParam, string weaponTypeParam, int numShotsParam, double fireRateParam, double damagePerShotParam, double accuracyParam, double trackingParam, double armorPenetrationParam) : Hardpoint(nameParam, manufacturerParam, hpParam, armorParam, minCrewParam) {
	weaponType = weaponTypeParam;
    numShots = numShotsParam;
    fireRate = fireRateParam;
    damagePerShot = damagePerShotParam;
    accuracy = accuracyParam;
    tracking = trackingParam;
    armorPenetration = armorPenetrationParam;
}

vector<Weapon> createWeaponList() {
    vector<Weapon> weaponList;
    ifstream inFile;
    inFile.open("weaponStats.csv"); 
    if(!inFile) { //catches an error if this does not open
        cout << "Unable to open file, exiting program" << endl;
        Sleep(100000000);
        exit(1);
    }
    string temp = "";
    while(getline(inFile, temp)){ //file there are still lines to read, grab a line and add to end of vector
        // weaponList.push_back(readWeapon(temp));
    }
    inFile.close();
    // for(int i=0; i<playerList.size(); i++) {
    //     playerList[i].printPlayerInfo();
    // }
    return weaponList;
}

Weapon readWeapon(string weaponString) {
    Weapon newWeapon;
    string currentString = "";
    int i=0;
    while(weaponString[i] != ',') {
        currentString += weaponString[i];
        i++;
    }
    i++;
    newWeapon.name = currentString;
    currentString = "";
    while(weaponString[i] != ',') {
        currentString += weaponString[i];
        i++;
    }
    i++;
    newWeapon.manufacturer = currentString;
    currentString = "";
    while(weaponString[i] != ',') {
        currentString += weaponString[i];
        i++;
    }
    i++;
    newWeapon.hitPoints = stod(currentString);
    currentString = "";
    while(weaponString[i] != ',') {
        currentString += weaponString[i];
        i++;
    }
    i++;
    newWeapon.crewRequirement = stoi(currentString);
    currentString = "";
    while(weaponString[i] != ',') {
        currentString += weaponString[i];
        i++;
    }
    i++;
    newWeapon.weaponType = currentString;
    currentString = "";
    while(weaponString[i] != ',') {
        currentString += weaponString[i];
        i++;
    }
    i++;
    newWeapon.numShots = stoi(currentString);
    currentString = "";
    while(weaponString[i] != ',') {
        currentString += weaponString[i];
        i++;
    }
    i++;
    newWeapon.fireRate = stod(currentString);
    currentString = "";
    while(weaponString[i] != ',') {
        currentString += weaponString[i];
        i++;
    }
    i++;
    newWeapon.damagePerShot = stod(currentString);
    currentString = "";
    while(weaponString[i] != ',') {
        currentString += weaponString[i];
        i++;
    }
    i++;
    newWeapon.accuracy = stod(currentString);
    currentString = "";
    while(weaponString[i] != ',') {
        currentString += weaponString[i];
        i++;
    }
    i++;
    newWeapon.tracking = stod(currentString);
    currentString = "";
    while(i < weaponString.length() && weaponString[i] != '\n') {
        currentString += weaponString[i];
        i++;
    }
    newWeapon.armorPenetration = stod(currentString);
    return newWeapon;

}