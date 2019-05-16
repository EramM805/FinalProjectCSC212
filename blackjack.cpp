#include <cstdlib>     // Provides EXIT_SUCCESS
#include <iostream>    // Provides cout
#include <string>      // Provides string class
#include "table.h"   // Provides the header file
using namespace std;
using namespace main_savitch_12A;

//Prototypes used for functions in this game program:

int hashkey(const card& c) {
        return c.key; 
    } 
void setup(){
    table<card, 13, hashkey> my_table;
    card data[13];
    data[0].key = 0;
    data[0].value = 1;
    data[1].key = 1;
    data[1].value = 2;
    data[2].key = 2;
    data[2].value = 3;
    data[3].key = 3;
    data[3].value = 4;
    data[4].key = 4;
    data[4].value = 5;
    data[5].key = 5;
    data[5].value = 6;
    data[6].key = 6;
    data[6].value = 7;
    data[7].key = 7;
    data[7].value = 8;
    data[8].key = 8;
    data[8].value = 9;
    data[9].key = 9;
    data[9].value = 10;
    data[10].key = 10;
    data[10].value = 10;
    data[11].key = 11;
    data[11].value = 10;

     my_table.insert(data[0]);
     my_table.insert(data[1]);
     my_table.insert(data[2]);
     my_table.insert(data[3]);
     my_table.insert(data[4]);
     my_table.insert(data[5]);
     my_table.insert(data[6]);
     my_table.insert(data[7]);
     my_table.insert(data[8]);
     my_table.insert(data[9]);
     my_table.insert(data[10]);
      my_table.insert(data[11]);
       my_table.insert(data[12]);
    //std::cout<<my_table.is_present(12)<<std::endl;
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
    return;
}

void addplayercard(){
    
}

void adddealercard(){
    
}


int main() {
    
    setup();
    //instruct ( );
    
    return 0;
}
