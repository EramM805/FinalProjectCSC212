#ifndef MAIN_SAVITCH_LIST_H  
#define MAIN_SAVITCH_LIST_H

#include <cstdlib> // Provides size_t and NULL

#include <list>
#include <tuple>
#include <iostream>
#include "node.h"

namespace nodespace{
    class LList{
	public:
        LList(){
            head_ptr=NULL;
            tail_ptr=NULL;
            list_length=0;
        }
        // functions modified from the linked list toolkit
        std::size_t length(const node* head_ptr){const node *cursor;
            size_t answer = 0;
            for (cursor = head_ptr; cursor != NULL; cursor = cursor->link( ))
                ++answer;
            
            return answer;}
        
        //add to end, insert at position P
        void append(const node::value_type& entry);
        void insert(std::size_t position, const node::value_type& entry);   
        
        //find first occurrence
        const node* search(const node::value_type& target);
        const node* locate(std::size_t position);
        
        //remove by value, remove all
        bool remove(const node::value_type& target);
        bool remove_tail(std::size_t position);
        void clear();
        
        
        //returns new list
        LList* copy();
       // std::list<std::tuple<node::value_type, int>> frequency(LList data);

        //additional functions to index into list and overwrite node
        node* operator[] (size_t ind);
        node& operator = (node::value_type i);

    private:
        node* head_ptr;
        node* tail_ptr;
        size_t list_length;
    };

}
#endif

		
