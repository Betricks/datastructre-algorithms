#include <bits/stdc++.h>

using namespace std;


// this the node we are going to call when we want to create a new node then we are going to connect to other nodes to become a linkedlist. 
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

    // inserting value at the end of the linkedlist
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
    // prints all the value that the linkedlist contains
     void display(){
        
        Node* current = head;
        
        while (current != nullptr)
        {
            cout << current->data << " " << endl;
            current = current->next;
        }
     }
    // it returns middle element in linkedList
    // by using two pointers [fast][slow] pointers.
     int fastSlow(){
        Node* fast = head;
        Node* slow = head;
        while(fast && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->data;
     }

    // it returns 1 if the linkedlist is cycle
    // if it doesn't it return 0.
    // by using two pointers [fast][slow] pointers.
    int fastSlowCicle(){
        Node* fast = head;
        Node* slow = head;

        while(fast && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                return 1;
            }
        }
        return 0;
    }

    // it returns the head of the cycleLinkedList if the linkedlist is cycle
    // else it return 0 if it the linkedlist doesn't have any cycle
    int headFastSlow(){
        Node* fast = head;
        Node* slow = head;
        Node* slow2 = head;

        while(fast && fast->next != nullptr){
            slow = slow->new;
            fast = fast->next->next;

            if(slow == fast) break;
        }

        if(!fast || fast->next == nullptr) return;

        while(slow != slow2){
            slow = slow->next;
            slow2 = slow2->next;
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
    cout<< linkedlist.fastSlowCicle() << endl;
    
    return 0;
}