
#include <bits/stdc++.h>

using namespace std;

struct Node{
    
    int data;
    Node *next;
    
    Node(int value) : data(value), next(nullptr){}

};


class LinkedList{
    public: 
        Node *head;
    
    LinkedList() : head(nullptr){}
    
    void insert(int value, int index){
        
        if(index == 0){
            Node *newNode = new Node(value);
            head = newNode;
        }
        else if(index > 0){
            
            Node *current = head;
            int position = index;
            
            while(position > 1){
                current = current->next;
                position -1;
            }
            
            Node *newNode = new Node(value);
            Node *prev = current;
            newNode->next = current->next;
            prev->next = newNode;
            
            
        }
        
        
    }
      
};
