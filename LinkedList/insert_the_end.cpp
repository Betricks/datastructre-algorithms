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
        
        Node* current = head;
        
        while (current != nullptr)
        {
            cout << current->data << " " << endl;
            current = current->next;
        }
     }

     auto fastSlow(){
        Node* fast = head;
        Node* slow = head;
        while(fast && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->data;
     }
};



int main(){
    
    LinkedList linkedlist;
    
    linkedlist.insert(10);
    linkedlist.insert(20);
    linkedlist.insert(30);
    linkedlist.insert(35.5);
    linkedlist.insert(40);
    linkedlist.insert(50);
    
    linkedlist.display();
    cout << "Middle value : " << linkedlist.fastSlow() << endl;
    
    return 0;
}