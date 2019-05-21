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
//used to remove the last card
bool removetail(card c[], int key){
    bool removed = false;
    if(c[key-1].value.length(c[key-1].value[0])){
        removed = c[key-1].value.remove_tail(c[key-1].value.length(c[key-1].value[0]));
    }
    else{
        return removed;
    }
    return removed;
}
//table to setup the project. The time complexity for setup part is O(n^3)
void setup(card data[]){
    //create linked list
    //create table
    //add linked list to table
    //table<card, 11, hashkey> my_table;
    int key_local=0;
    /*card data[10];*/
    data[0].key = key_local;
    for(key_local = 1; key_local < 10; key_local++){
        for(int i = 0; i < 4; i++){
            data[key_local-1].value.append(key_local);
        }
    }
    for(int i = 0; i < 16; i++){
        data[key_local-1].value.append(key_local);
    }
}
//sums up all the card total for each player. The time complexity for sum part is O(n)
int sum(card c[], int length, int key){
    int total = 0;
    int count_aces = 0;
    for(int i = 0; i < length; i++){
        //If player draws an Ace and total is not over 21, the ace is considered to be 11.
        if(c[key].value[i]->data() == 1){
            total = total + 11;
            count_aces++;
        }
        //If player does not draw an Ace.
        else{
            total = total + c[key].value[i]->data();
        }
        //Optimizes the total sum of the player's cards if player has aces and sum > 21.
        if(total > 21 && count_aces >= 1){
            total = total - 10;
            count_aces--;
        }
    }
    return total;
}
//destributes the card at the beginning of the game. The time complexity for initial distribute part is O(n)
void initial_distribute(card players[], int numofplayers, card c[]){
    for(int i = 0; i < numofplayers; i++){
        while(players[i].value.length(players[i].value[0]) != 2){
            srand(time(0));
            unsigned randomNumber = ( rand() % (10 - 1 + 1) ) + 1;
            if(removetail(c, randomNumber)){
                players[i].value.append(randomNumber);
            }
        }
    }
}
//to distribute cards after first distribute, basically to keep the game going until theres a winner/loser
void distribute(card player[], int key, card c[]){
    bool stopper = false;
    while(stopper == false){
        srand(time(0));
        unsigned randomNumber = ( rand() % (10 - 1 + 1) ) + 1;
        if(removetail(c, randomNumber)){
            player[key].value.append(randomNumber);
            std::cout << randomNumber << " was drawn." << endl;
            stopper = true;
        }
    }
}

//destructing players, card and deck when we replaying
 void destructor(card playerss[], card dealer[], card data[], card scores[]){
     delete playerss;
     delete dealer;
     delete data;
     delete scores;
}

//distributes the dealer card
void init_distribute_dealer(card dealer[], card c[]){
    while(dealer[1].value.length(dealer[1].value[0]) != 2){
            srand(time(0));
            unsigned randomNumber = ( rand() % (10 - 1 + 1) ) + 1;
            if(removetail(c, randomNumber)){
                dealer[1].value.append(randomNumber);
            }
        }
}
// asks the player if they would like to stand or hit and then shows the total sum for that player, if the sum is equal or more than 21, it says player has been busted.
void decision(card player[], int key, card c[]){
    int decision;
    do {
        std::cout << "Player " << key+1 <<", would you like to stand or hit? (0 = stand or 1 = hit)" << endl;
        std::cin >> decision;
        if(decision == 1){
            distribute(player, key, c);
            if(sum(player, player[key].value.length(player[key].value[0]), key) <= 21){
            cout << "Total: " << sum(player, player[key].value.length(player[key].value[0]), key) << endl;
            }
            else{
                std::cout << "Player has been BUSTED!" << endl;
                break;
            }
        }
    } while (decision == 1);
}
//checks the decision dealer will like to take, stand or hit then checks the sum for dealer just like it checked for the player, then shows if dealer has been busted
void decision_dealer(card dealer[], int key, card c[]){
    int decision;
    do {
        std::cout << "Dealer, would you like to stand or hit? (0 = stand or 1 = hit)" << endl;
        std::cin >> decision;
        if(decision == 1){
        distribute(dealer, key, c);
        if(sum(dealer, dealer[key].value.length(dealer[key].value[0]), key) <= 21){
            cout << "Total: " << sum(dealer, dealer[key].value.length(dealer[key].value[0]), key) << endl;
        }
        else{
            cout << "Dealer has been BUSTED!" << endl;
            break;
        }
        }
    } while (decision == 1);
}
//shows the score for each player
void scoreboard(card score[], int sum, int key){
    if(sum > 21){
        score[key].value.append(0);
    }
    else{
        score[key].value.append(sum);
    }
}
//shows the card player has in hand
void show_player_hand(card player[], int key){
    for(unsigned int j = 0; j < player[key].value.length(player[key].value[0]); j++){
        std::cout << " " << player[key].value[j]->data();
    }
}
// main part of the project, asks how many players are playing the game, has 4 tables, 1 for setup, 1 for players, 1 for dealer, and 1 to keep track of the score. it then shuffles the deck and creates a full deck of cards, distributes to cards to the player and 2 cards to the dealer. It reveals dealers first card, then goes to reveal players hand and asks if the user would like the player to hit or stand. If the dealer has 16 or less it asks the dealer to redraw the card and then shows which is the current card in dealers hand. We then generate a scoreboard and print it to show the current score and then display whether the player or dealer won,lost, or busted.
//The time complexity for instruct part is O(n^4)
void instruct( ){
    cout << "Welcome to Blackjack Game program!" << endl;
    int playerss;
    do {
        cout << "How many players are playing?" << endl;
        cin >> playerss;
    } while (playerss == 1);

    //declares the setup
    table<card, 11, hashkey> my_table;
    int key_local=0;
    card data[10];
    data[1].key = key_local;
    
    //declares the players
    //addPlayers(players);
    table<card, 7, hashkey> player_table;
    int numplayers=0;
    card players[7];
    players[0].key = numplayers;

    //declares the dealer
    //addDealer(dealer);
    table<card, 1, hashkey> dealer_table;
    int numdealer=1;
    card dealer[7];
    dealer[1].key = numdealer;

    //Declares score table
    table<card, 7, hashkey> score_board;
    int numscores=0;
    card scores[7];
    scores[1].key = numscores;

    //Creates Full Deck of Cards
    setup(data);

    //Distributes two cards to each player
    initial_distribute(players, playerss, data);

    //Distributes two cards to dealer

    init_distribute_dealer(dealer, data);

    //Reveals dealer's first card
    cout << "The dealer's faced up card-value is " << dealer[1].value[0]->data() << "." << endl;

    //Reveals players' hands
    for(int z = 0; z < playerss; z++){
        std::cout << "Player " << z+1 << ": ";
        show_player_hand(players, z);
        std::cout << "\t Total: " << sum(players, players[z].value.length(players[z].value[0]), z) << endl;

    }

    //Ask to hit or not
    for(int k = 0; k < playerss; k++){
        decision(players, k, data);
    }

    //Dealer's hand is revealed
    std::cout << "Dealer has: ";
    show_player_hand(dealer, 1);
    std::cout<< "\t Total: " << sum(dealer, dealer[1].value.length(dealer[1].value[0]), 1) << endl;

    //If Dealer has 16 or below
    if(sum(dealer, dealer[1].value.length(dealer[1].value[0]), 1) <= 16){
        std::cout << "The Dealer has a total sum of 16 or below!" << endl;
        std::cout << "The Dealer must draw again!" << endl;
        distribute(dealer, 1, data);
        std::cout << "Dealer NOW HAS: ";
        show_player_hand(dealer, 1);
        std::cout << endl;
        if(sum(dealer, dealer[1].value.length(dealer[1].value[0]), 1) < 21){
            std::cout << "New Total: " << sum(dealer, dealer[1].value.length(dealer[1].value[0]), 1) << endl;
            //Dealer will decide to hit or stand
            decision_dealer(dealer, 1, data);
        }
        else if(sum(dealer, dealer[1].value.length(dealer[1].value[0]), 1) == 21){
            std::cout << "New Total: " << sum(dealer, dealer[1].value.length(dealer[1].value[0]), 1) << endl;
            cout << "The dealer has won." << endl;
        }
        else{
            std::cout << "The Dealer has been busted!" << endl;

        }
    }
    else if(sum(dealer, dealer[1].value.length(dealer[1].value[0]), 1) == 21){
        cout << "The dealer has already won." << endl;
    }

    //Generate Scoreboard
    for(int q = 0; q < playerss; q++){
        scoreboard(scores, sum(players, players[q].value.length(players[q].value[0]), q), q);
    }

    //Prints Scoreboard
    for(int r = 0; r < playerss; r++){
        if(scores[r].value[0]->data() == 0){
            cout << "Player " << r+1 << ": " << "BUSTED!" << endl;
        }
        else{
            cout << "Player " << r+1 << ": " << scores[r].value[0]->data();
            if(scores[r].value[0]->data() > sum(dealer, dealer[1].value.length(dealer[1].value[0]), 1)){
                cout << "\t WINNER!" << endl;
            }
            else if(sum(dealer, dealer[1].value.length(dealer[1].value[0]), 1) > 21){
                cout << "\t WINNER!" << endl;
            }
            else{cout << "\t LOSER! :(" << endl;}
        }
    }

    return;
    
}
//used to play the game again or simply exit the program
int main() {
        bool play_again = true;
        while (play_again)
        {
            instruct();
            std::cout << "Would you like to play again? (y / n) ";
            char answer;
            std::cin >> answer;
            if (tolower(answer) != 'y')
            {
                play_again = false;
                std::cout << "Thanks for playing Blackjack!" << endl;
            }
        }
    return 0;
}

