#include <bits/stdc++.h>

using namespace std;


struct Node{
    Node *prev;
    int data;
    Node *next;
    
    Node(int value) : data(value), next(nullptr), prev(nullptr){}  
};


class DoublyLinkedList{
    private:
        Node* head;
    
    
    public:
        DoublyLinkedList() : head(nullptr){}
    
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
        
        Node* current = head;
        
        while (current != nullptr)
        {
            cout << current->data << " " << endl;
            current = current->next;
        }
     }
     
     void reverse(){
         
         Node *current = head;
         
         if (current == nullptr){
             cout << "There is no value to reverse :" <<endl;
             return;
             
         }
         
         while(current->next != NULL){
             current = current->next;
         }
         
         while(current != NULL){
             cout << current->data <<endl;
             current = current->prev;
         }
     
     }
     
};



int main(){
    
    DoublyLinkedList doublelinkedlist;
    
    doublelinkedlist.insert(10);
    doublelinkedlist.insert(20);
    doublelinkedlist.insert(30);
    doublelinkedlist.insert(40);
    doublelinkedlist.insert(50);
    
    doublelinkedlist.display();
    doublelinkedlist.reverse();
    
    return 0;
}