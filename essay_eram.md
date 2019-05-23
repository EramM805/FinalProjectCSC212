Our project was to implement blackjack, a card game using hashmaps and linked list(for chaining). We implemented three hashmaps with the following roles: Deck : This hashmap stores a key and a linked list. The goal of this map is to store the values of the deck, Players: This hashmap stores the cards of the players, Scoreboard: This hashmap stores the values of the scoreboard.

The linked list class we use is from homework 3. 
The access types for all of the functions are public. 
The time complexity for the functions are as follows:
Setup: O(n^2), Sum : O(n), Card distribution : O(n), Players/Dealers : O(n^2), Instruct: O(n^2)

We used the implementation from the textbook but ended up making our own functions because our needs were different. 

I initially had the idea of implementing this game when I realized it was a game where we need to store values of the cards based of the type. The reason why we used hashmaps was because our access would be O(1) and we needed fast access time. We decided to use linked list for chaining because insertion and removal will take less time than a array.

Our sources for the project are: Data Structures and Other Objects Using C++ book, Google, Stack Overflow

My contrubutions for the porject is as follows:
Implementaion,
Linking Linked list with hashtables and writing functions for insertion and removal,
Indexing of hash tables,
Remove tail ptr,
Summing, 
Setting up the deck,
Testing implementation
