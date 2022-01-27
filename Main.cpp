#include"FleetGame.h"

int main() {
    cout << VersionNumber << endl;
    cout << VersionChanges << endl;

    string currentCommand  = "";

    while (currentCommand == "") {
        cout << "1. Examine ships \n" << endl;
        cin >> currentCommand;
    }



    /*
    
    int timeEstimateFactor = 86000;
    int numSimulations = 1;
    time_t startingTime = time(NULL);
    time_t currentTime = time(NULL);
    time_t previousTime = time(NULL);
    cout << "Approximately " << (timeEstimateFactor*numSimulations/1000)-difftime(currentTime,startingTime) << " seconds remaining" << endl;
    
    time_t endingTime = time(NULL);
    double seconds = difftime(endingTime,startingTime);
    string exitString = "";
    cout << "This process took " << seconds << " seconds" << endl;
    cout << "Press any key to exit: "; 
    cin >> exitString;
    if(exitString == "r" || exitString == "R") {
        cout << "Have a nice day!" << endl;
    }

    */
}
