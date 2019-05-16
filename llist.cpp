#include "llist.h"
#include "node.cpp"
#include <tuple>
#include <string>
#include <algorithm>

namespace nodespace{
	
	void LList::append(const node::value_type& entry){
        node* temp = new node;
        temp->set_data(entry);
        temp->set_link(NULL);
        
        if(head_ptr==NULL) {
            head_ptr = temp;
            return;
        } else {
            node* last = head_ptr;
            while(last->link()) last=last->link();
            last->set_link(temp);
            tail_ptr = temp;
        }
    };
	
     
    void LList::insert(std::size_t position, const node::value_type& entry){
        int x = 0;
        size_t lengthoflist = length(head_ptr);
        node* temp = new node;
        temp->set_data(entry);
        temp->set_link(NULL);
        if(position > lengthoflist){
            throw std::out_of_range ("Position is greater than length");
        }
        if(head_ptr==NULL) {
            head_ptr = temp;
            return;
        } 
        else if(position == lengthoflist-1){
           append(entry);
        }
        else {
            node* last = head_ptr;
            while(x!=position-1)
            {
                last=last->link();
                x = x+1;
            }
            temp->set_link(last->link());
            last->set_link(temp);
        }
    };

    //find first occurrence
    const node* LList::search(const node::value_type& target){
         node* temp = list_search(head_ptr, target);
         return temp;
    };

    const node* LList::locate(std::size_t position){
         node* temp = list_locate(head_ptr,position);
         return temp;
        };

    //remove by value, remove all
    //find value first
    //take previous one, set the link to the next one
    bool LList::remove(const node::value_type& target){
        if(head_ptr == NULL){
            return false;
        }
        node *cursor;
        node *pre_node;

        for (cursor = head_ptr; cursor != NULL; cursor = cursor->link( )){
            if(target == cursor->data()){
                break;
            }
            if(target != cursor->data() && cursor == NULL){
                return false;
            }
            pre_node = cursor;
        }
        list_remove(pre_node);
        return true;
        
    };

    void LList::clear(){
        list_clear(head_ptr);
        

    };

    //returns new list
    LList* LList::copy(){
        LList *newList;
        node *cursor;
        for (cursor = head_ptr; cursor != NULL; cursor = cursor->link( )){
            newList->append(cursor->data());
        }
        return newList;
    };
//
//    //additional functions to index into list
    node* LList::operator[] (size_t ind){
        size_t count = 0;
        node* cursor;
        cursor = head_ptr;
        for(count = 0;count<ind;count++){
            cursor = cursor->link();
        }
        return cursor;
        
    };

    /*std::list<std::tuple<node::value_type, int>> frequency(LList data){
        std::list<tuple<node::value_type, int>> freq;
        tuple<node::value_type, int> item;
        int i;
        int j;
        int count = 0;
        
        for(i=0; i != data.length(data[0])-1; i++){
            if(i != 0){
                for(auto& tuple: freq) {
                    if(data[i]->data() ==get<0>(tuple)){
                        break;
                    }   
                    else{
                        count = 1;
                        for(j=i+1; j != data.length(data[0]); j++){
                            if(data[i]->data() == data[j]->data()){
                                count++;
                            }
                        }
                        freq.push_back(std::tuple<node::value_type, int>(data[i]->data(),count));
                    count = 0;
                    }
                }
            } 
            else{
            count = 1;
            for(j=i+1; j != data.length(data[0]); j++){
                if(data[i]->data() == data[j]->data()){
                   count++;
               }
            }
            freq.push_back(std::tuple<node::value_type, int>(data[i]->data(),count));
            count = 0;
             }
        }
        
        return freq;
     
    };
    */
   std::list<std::tuple<node::value_type, int> > frequency(LList data){
        std::list<std::tuple<node::value_type, int> > freq;
        std::tuple<node::value_type, int> item;
        int i;
        int j;
        int count = 0;
        
        for(i=0; i < data.length(data[0]); i++){
           for(j=0; j < data.length(data[0]); j++){
                if(i == j){
                    count++;
                   continue;
                }
                else if(data[i]->data() == data[j]->data() && i<j){
                    count++;
                }
                else if(data[i]->data() == data[j]->data() && i>j){
                    break;
                }
            }
            if(count != 0){
                freq.push_back(std::tuple<node::value_type, int>(data[i]->data(),count));
            }
            count = 0;

        }
        return freq;
     };

     
    
   
}
