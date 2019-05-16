#include <cstdlib>     // Provides rand and srand
#include <iostream>    // Provides cout
#include <string>      // Provides string class
#include "table.h"   // Provides the header file
using namespace std;
using namespace main_savitch_12A;
/*/ Game rules: 
Aces,2,3,4,5,6,7,8,9 are 4 cards
10 is 16 cards because kings, queens and jack count as 10
/*/
//Prototypes used for functions in this game program:
void setup();

void shuffle(int card[], int n){
    srand(time(0));
    for (int i =0; i < n; i++){
        int r = i + (rand() % (52-i));
        swap(card[i], card[r]);
    }
}

void instruct( ){
    cout << "Welcome to Blackjack Game program!" << endl;
    cout << "Game Rules: Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine are 4 Cards each. Ten is 16 cards because King, Queen and Jack count as Ten  " << endl;
    int players;
    cout << "How many players are playing?" << endl;
    cin >> players;
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
    instruct ( );

    int a[] = {0, 1, 2, 3, 4 ,4 ,5 ,6 ,7 ,8, 9 , 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46 ,47, 49, 50, 51};
    shuffle (a, 52);
    for (int i=0; i<52; i++)
    cout << a[i] << " "; 
    cout << "The deck has been shuffled" << endl; 
    cout << endl;

    return 0;
}
