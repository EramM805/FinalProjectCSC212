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
    //create linked list
    //create table
    //add linked list to table 
    table<card, 11, hashkey> my_table;
    int key_local;
    card data[10];
    data[0].key = key_local;
    for(key_local = 1; key_local < 10; key_local++){
        for(int i = 0; i < 4; i++){
            data[key_local-1].value.append(key_local);
        }
    }
    for(int i = 0; i < 16; i++){
        data[key_local-1].value.append(key_local);
    }
    std::cout<<key_local<<std::endl;
    std::cout<<data[9].value[15]->data()<<std::endl;

}

void instruct( ){
    cout << "Welcome to Blackjack Game program!" << endl;
    int players;
    cout << "How many players are playing?" << endl;
    cin >> players;
}

void shuffle(int card[], int n){
    srand(time(0));
    for (int i =0; i < n; i++){
        int r = i + (rand() % (52-i));
        swap(card[i], card[r]);
    }
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

int main() {
    // cout << "Shuffling the deck.." << endl;
    // int a[] = {0, 1, 2, 3, 4, 5, 6 ,7 ,8, 9 , 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46 ,47, 49, 50, 51};
    // shuffle (a, 52);
    // for (int i=0; i<52; i++)
    // cout << a[i] << " "; 
    // cout << endl;
    // cout << "The deck has been shuffled" << endl;  
    setup();
    //instruct ( );
    
    return 0;
}
