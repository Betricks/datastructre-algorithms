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
  
  
  public:
    void insertAtBegining(int value){
        
        Node* newNode = new Node(value);
        
        newNode->next = head;
        head = newNode;
        
    } 
    
    void display(){
        Node* current = head;
        while (current != nullptr)
        {
            cout << current->data << " " << endl;
            current = current->next;
        }
        
    }   
};





int main(){
     LinkedList linkedlist;
    
    linkedlist.insertAtBegining(10);
    linkedlist.insertAtBegining(20);
    linkedlist.insertAtBegining(30);
    linkedlist.insertAtBegining(40);
    linkedlist.insertAtBegining(50);
    
    linkedlist.display();
    
    return 0;
}