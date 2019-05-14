#include <cstdlib>     // Provides EXIT_SUCCESS
#include <iostream>    // Provides cout
#include <string>      // Provides string class
#include "table.h"   // Provides the header file
using namespace std;
using namespace main_savitch_12A;

//Prototypes used for functions in this game program:
void setup(){
    
}

void instruct( ){
    cout << "Welcome to Blackjack Game program!" << endl;
}

void exitGame(){
    int exitGame = 1;
    do {
        cout << "Would you like to play again? (1 = Yes, 2 = No)" << endl;
        cin >> exitGame;
    } while (exitGame == 1);
    cout << "Thanks for playing!" << endl;
    return EXIT_SUCCESS;
}

void addplayercard(){
    
}

void adddealercard(){
    
}


int main() {
    instruct ( );
    
}
