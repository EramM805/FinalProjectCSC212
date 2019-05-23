Our project was to implement blackjack, a card game using hashmaps and linked list(for chaining). We implemented three hashmaps with the following roles:<br> Deck : This hashmap stores a key and a linked list. The goal of this map is to store the values of the deck <br> Players: This hashmap stores the cards of the players <br> Scoreboard: This hashmap stores the values of the scoreboard. <br>Dealer: This hashmap stores the cards for the dealer.

The linked list class we use is from homework 3. We used the textbooks' implementation of hashmaps for our map. Eventually, we realized that because our insert and remove required different actions, we changed our functions.
<br>
The access types for all of the functions are public. 
The time complexity for the functions are as follows: <br>
Setup: O(n^2) <br> Sum : O(n)<br> Card distribution : O(n) <br> Players/Dealers : O(n^2) <br> Instruct: O(n^2)

I initially had the idea of implementing this game when I realized it was a game where we need to store values of the cards based off of the type. The reason why we used hashmaps was because our access would be O(1) and we needed fast access time. We decided to use linked list for chaining because insertion and removal will take less time than a array and because we had already implemented a linked list in one of our previous homeworks.

My contributions for the project is as follows:<br>
*Implementaion of hashmap from textbook <br>
*Linking Linked list with hashtables and writing functions for insertion and removal<br>
*Indexing of hash table<br>
*Remove tail ptr function for our linked list<br>
*Summing up values inside a card object<br>
*Setting up the deck<br>
*Testing implementation<br>

Our sources for the project are: Data Structures and Other Objects Using C++ book, Google, Stack Overflow
