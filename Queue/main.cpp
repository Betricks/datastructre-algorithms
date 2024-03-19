#include <bits/stdc++.h>


using namespace std;


struct  Node{
    
    int data;
    Node *next;
    Node *prev;
    
    Node(int value) : data(value), next(nullptr), prev(nullptr){}
};


class Queue{
    
    private:
        Node *head;
        Node *tail;
        
    public:
        Queue() : head(nullptr), tail(nullptr){}
    
        
        void Enqueue(int value){
            Node *newNode = new Node(value);
            if(head == nullptr){
                head = newNode;
                tail = newNode;
            }else{
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
            
        }
        
        void Dequeue(){
            Node *current = tail;
            if(current == nullptr){
                throw "there is no value in the Queue";
            }else{
                tail = current->prev;
                delete current;
            }
        }
        
        void display(){
            
            Node *current = head;
            while(current != NULL){
                cout << "data : " << current->data << endl;
                current = current + 1;
            }
            
            
        }
    
};


int main(){
    
    Queue queue;
    
    queue.Enqueue(1);
    queue.Enqueue(2);
    queue.Enqueue(3);
    queue.Enqueue(4);
    queue.Enqueue(5);
    
    
    queue.display();
    return 0;
}