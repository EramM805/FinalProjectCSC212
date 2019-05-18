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
bool removetail(card c[], int key){
    bool removed = false;
    std::cout<<c[key].value.length(c[key].value[0]);
    if(c[key].value.length(c[key].value[0])){
        removed = c[key].value.remove_tail(c[key].value.length(c[key].value[0]));
    }
    else{
        std::cout<<hashkey(c[key])<<std::endl;
        //throw std::out_of_range ("Key does not exist");
    }
    return removed;
}
int sum(card c[], int length, int key){
    int total = 0;
    for(int i = 0; i < length; i++){
        total = total + c[key].value[i]->data();
    }
    return total;
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
    std::cout<<sum(data, data[1].value.length(data[1].value[0]), 1)<<std::endl;
    std::cout << removetail(data, 1);
    std::cout<<data[1].value.length(data[1].value[0]);
    //std::cout<<data[2].value.length(data[2].value[0])<<std::endl;
    //std::cout<<data[2].value[15]->data()<<std::endl;
    
}

void addPlayers(){
    //hash table for amount of players
    //key is the player number and value is linked list of cards
    table<card, 7, hashkey> my_table;
    int players=0;
    card data[7];
    data[1].key = players;
    for(players = 1; players <= 7; players++){
        for(int i = 0; i < 3; i++){
            data[players-1].value.append(players);
        }
    }
    std::cout << "Player 1 was assigned card: " <<sum(data, data[1].value.length(data[0].value[0]), 1)<< std::endl;
    std::cout << "Player 2 was assigned card: " <<sum(data, data[2].value.length(data[0].value[0]), 2)<< std::endl;
    std::cout << "Player 3 was assigned card: " <<sum(data, data[3].value.length(data[0].value[0]), 3)<< std::endl;
    std::cout << "Player 4 was assigned card: " <<sum(data, data[4].value.length(data[0].value[0]), 4)<< std::endl;
    std::cout << "Player 5 was assigned card: " <<sum(data, data[5].value.length(data[0].value[0]), 5)<< std::endl;
    std::cout << "Player 6 was assigned card: " <<sum(data, data[6].value.length(data[0].value[0]), 6)<< std::endl;
}


void instruct( ){
    cout << "Welcome to Blackjack Game program!" << endl;
    int players;
    do {
        cout << "How many players are playing?" << endl;
        cin >> players;
    } while (players == 1);
    addPlayers();
    return;
    
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
    instruct ( );
    //addPlayers();
    exitGame();
    
    
    return 0;
}

