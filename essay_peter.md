# Project: Blackjack

<d6>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 
The objective of this project was to implement a chained hash table for the creation of a C++ program for the popular card game known as “Blackjack” or “Twenty-One.” It is worth implementing this game because it assists in demonstrating how chained hash tables can be used to categorize similar objects under a given index. Because chained hash tables can link a set of data under one index, this program makes use of this data structure by organizing the cards of a deck into an index based on its card value. Moreover, this program also makes use of this data structure because it can associate the players of the game into varying indexes while storing their cards into a chaining object. Furthermore, it is also considerable to implement this game because it can possibly be used in social media apps such as Facebook or Snapchat where people can play this game through in-app messaging. 
</d6>


</d7>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; The utilization of a chained hash table was ideal in the development of this project because it provided several advantages in monitoring the scores of the players and the status of the deck. The convenience of traversing and accessing the elements of the hash table was also suitable for implementing Blackjack because it allowed for cards of the same value and differing suits to be organized according to their associated key. For instance, cards such as Ace of Hearts and Ace of Spades are contained in a chain which is associated to the key of one. In other words, the chained hash table was used to form a deck of cards. Similarly, the chained hash table was suitable in recording the scores of the players and the cards of the players where the key represented each player. This necessitated for my team members to declare four chained hash tables for the deck, the players’ hands, the scoreboard, and the dealer’s hand. Although it is possible to use only three hashes, for the sake of simplicity, a separate chained hash table was used to record the cards of the dealer’s hand. Moreover, this data structure was suited for creating functions that calculates the sum of a player’s hand and distributing cards to the dealer and the players.
</d7>

<d8>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Despite the advantages of using a chained hash table for this project, the disadvantages are associated with the limitations in traversing the chain object for each key. This object is a linked list which required that the order of traversal begins at the head of the list. This circumstance causes the time complexity for traversing the chain object to increase as the index within the chained object increases. Furthermore, this data structure’s size is also limited to a fixed number as declared in the program. To circumvent these disadvantages, a vector of vectors would have been a better option to use in this project. In comparison to other data structures in this course, the chained hash map is not dynamic in terms of the total indices it can possess; however, it is dynamic when concerning the value that is associated with its indices. For instance, the object that is used for chaining objects contained within an index of the hash table is a dynamic linked list. 
</d8>

<d9>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; In the file, table.h, the chained hash table, called “Card,” was programmed to consist of an integer for the key and a linked list – Llist – for chaining the elements of the chained hash table. The linked list was created separately from the project and was utilized because it is customizable and offers versatility rather than the use of standard library data structures. The methods for the linked list class such as append(), search(), insert(), locate(), remove(), remove_tail(), length(), and clear() have a time complexity of O(n). The time complexity for the copy() function has a time complexity of O(2n), while the time complexity for the operator for [] is O(n). As for the functions that perform operations on the chained hash table located in the blackjack program, the time complexities for removetail(), setup(), sum(), scoreboard(), and show_player_hand() are O(n). The distribution functions have varying time complexities because it requires a randomly generated number that is also present in the deck; however, the functions initial_distribute() and initial_distribute_dealer() predominantly have a time complexity of O(2n), while the functions distribute(), decision(), and decision_dealer() have time complexities of O(n). The instruct() function has a time complexity of O(8n) because it calls the previous functions. The access type is instant and has a time complexity of O(1), which is efficient in removing and adding elements between individual hash tables.
</d9>

### My Contributions: 
-	Fixed and collaborated with Eram to create the removetail() and sum() functions.
-	Created the initial distribution functions by utilizing the rand() function.
-	Worked with Faez to the create the decision functions for the players and dealer.
-	Spearheaded the direction of the project by planning out the flow of the instruct() function.
-	Developed the cout statements and user-friendly aspects of the project.
-	Formed the show_player_hand() function to display the hands of each player.
-	Adjusted and debugged functions throughout the program.
-	Established ways of comparing dealer’s hand and the players’ hands.

### Link to Github Repository - 
https://github.com/EramM805/FinalProjectCSC212

### Resources Used: 
- Data Structures and Other Objects Using C++ book