#include <bits/stdc++.h>

using namespace std;


struct Node{
    
    public:
        int data;
        Node *next;
        
        Node(int value) : data(value), next(nullptr){}
};


class Stacks{
    
    Node *head;

    public:
        Stacks() : head(nullptr){}
    
    void push(int value){
        
        Node *newNode = new Node(value);
        
        if(head == NULL){
            head = newNode;
            return;
        }
        
        newNode->next = head;
        head = newNode;
        
    }
    
    void pop(){
        if(head == NULL){
            cout << "there is no value "<<endl;
        }
        
        Node *current = head;
        head = current->next;
        delete current;
    }
    
    int Top(){
        return head->data;
    }
    
    bool isEmpty(){
        if(head == NULL){
            return true;
        }
        return false;
    }
};



int main(){
    
    Stacks stacked;
    
    stacked.push(1);
    stacked.push(2);
    stacked.push(3);
    stacked.push(4);
    stacked.push(5);
    
    cout << stacked.isEmpty() <<endl;
    cout << stacked.Top() << endl;
    stacked.pop();
    cout << "deleting the Top value :" <<endl;
    cout << stacked.Top() << endl;
    
    return 0;
}