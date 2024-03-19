#include <bits/stdc++.h>

using namespace std;


struct Node{
    
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr){}  
};


class LinkedList{
    private:
        Node* head;
    
    
    public:
        LinkedList() : head(nullptr){}
    
    void insert(int value){
        
        Node* newNode = new Node(value);
        
        if(head == nullptr){
            head  = newNode;
            
        }else{
            
            Node* current = head;
            
            while(current->next != nullptr){
                current = current->next;
            }
            
            current->next = newNode;
        }
        
        
    }
    
     void display(){
        
        Node *current = head;
        
        if(current == nullptr){
             cout << "there is no value " << endl;
         }
        
        while (current != nullptr)
        {
            cout << current->data << " " << endl;
            current = current->next;
        }
     }
     
     void Reverse(){
         
         
         Node *current = head;
         Node *pre_value = nullptr;
         Node *next_pointer = nullptr;
         
         if(current == nullptr){
             cout << "there is no value " << endl;
         }
         
         while(current != NULL){
             
             next_pointer = current->next;
             current->next = pre_value;
             pre_value = current;
             current = next_pointer;
             
         }
         head = pre_value;
     }
};



int main(){
    
    LinkedList linkedlist;
    
    linkedlist.insert(10);
    linkedlist.insert(20);
    linkedlist.insert(30);
    linkedlist.insert(40);
    linkedlist.insert(50);
    
    linkedlist.display();
    linkedlist.Reverse();
    cout << "reversing" << endl;
    linkedlist.display();
    
    return 0;
}