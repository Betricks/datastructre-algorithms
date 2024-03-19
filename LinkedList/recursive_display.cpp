#include <bits/stdc++.h>

using namespace std;


struct Node{
    
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr){} 
    
};



class LinkedList{
  
  public:
    Node* head;
    
    
  public:
    LinkedList() : head(nullptr){}
  
  
  public:
    void insertAtBegining(int value){
        
        Node* newNode = new Node(value);
        
        newNode->next = head;
        head = newNode;
        
    } 
    
    
    void recursive_display(Node *current){
        if(current == NULL) return;
        cout << "data : " << current->data << endl;
        recursive_display(current->next);
    }

};


int main(){
     LinkedList linkedlist;
    
    linkedlist.insertAtBegining(10);
    linkedlist.insertAtBegining(20);
    linkedlist.insertAtBegining(30);
    linkedlist.insertAtBegining(40);
    linkedlist.insertAtBegining(50);
    Node *current = linkedlist.head;
    linkedlist.recursive_display(current);
    
    return 0;
}