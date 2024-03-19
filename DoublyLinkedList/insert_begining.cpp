#include <bits/stdc++.h>

using namespace std;


struct Node{
    
    Node *previous;
    int data;
    Node *next;
    
    public:
        Node(int value) : data(value), previous(nullptr), next(nullptr){}

};


class DoublyLinkedList{
    private:
        Node *head;
        Node *tail; 
    
    public:
        DoublyLinkedList() : head(nullptr), tail(nullptr){}
        
        void insertAtTheBegining(int value){
            Node *newNode = new Node(value);
            if(head == nullptr){
                head = newNode;
                tail = newNode;
            }else{
                newNode->next = head;
                head->previous = newNode;
                head = newNode;
            }
        }
        
        
        void insertAtTheEnd(int value){
            Node *newNode = new Node(value);
            if(head == nullptr){
                head = newNode;
                tail = newNode;
            }
            else{
                tail->next = newNode;
                newNode->previous = tail;
                tail = newNode;
            }
        }
        
        
        void display(){
            Node *current = head;
            if(current ==  NULL){
                cout << "the LinkedList is empty" << endl;
                return;
            }
            while(current != NULL){
                cout << "data : " << current->data << endl;
                current = current->next;
            }
            
        }
        
        
    
};



int main(){
    
    DoublyLinkedList doubleLinkedList;
    
    doubleLinkedList.insertAtTheBegining(50);
    doubleLinkedList.insertAtTheBegining(40);
    doubleLinkedList.insertAtTheBegining(30);
   
    
    doubleLinkedList.insertAtTheEnd(20);
    doubleLinkedList.insertAtTheEnd(10);
     doubleLinkedList.insertAtTheEnd(30);
    
    
    doubleLinkedList.display();
        
    return 0;
}