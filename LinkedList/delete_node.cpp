#include <bits/stdc++.h>

using namespace std;



struct Node{
    public:
        int data;
        Node* next;
    
    public:
        Node(int value) : data(value), next(nullptr){}
    
    
};


class LinkedList{

    private:
        Node* head;
        
    public:
        LinkedList() : head(nullptr){}
        
    public:
        void inserInTheBegining(int value){
            
            Node* newNode = new Node(value);
            
            newNode->next = head;
            head = newNode;
            
        }
        
        
        void display(){
            
            Node* current = head;
            
            while(current->next != nullptr){
                cout << current->data << endl;
                current = current->next;
            }
        }
        
        void deleteValue(int value){
            
            if(head == nullptr){
                cout << "there is no value exist"<<endl;
                return;
            }
            
            Node* temp = head;
            Node* pre_Value = nullptr;
            
            if(temp != nullptr &&  temp->data == value){
                head = head->next;
                delete temp;
                cout << value + " has been deleted >>" << endl;
                return;
            }
            while(temp != nullptr && temp->data == value){
                pre_Value = temp;
                temp = temp->next;
            }
            if(temp == nullptr){
                cout << 'there is no value to delete' << endl;
                return;
            }
            pre_Value->next = temp->next;
            delete temp;
            
        }
    
};




int main(){
    
    LinkedList linkedlist;
    
    linkedlist.inserInTheBegining(10);
    linkedlist.inserInTheBegining(20);
    linkedlist.inserInTheBegining(30);
    linkedlist.inserInTheBegining(40);
    linkedlist.inserInTheBegining(50);
    
    linkedlist.deleteValue(30);
    
    linkedlist.display();
    
    return 0;
}