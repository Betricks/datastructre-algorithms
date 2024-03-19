#include <bits/stdc++.h>

using namespace std;



class Queue{
    private:
        int arr[10];
        int front = -1;
        int rare = -1;
    
  
    public:
        void EnQueue(int value){
            if(isEmpty){
                front, rare = +1;
                arr[rare] = value;
            }
            else{
                rare = +1;
                arr[rare] = value;
            }
        }  
        
        void DeQueue(){
            if(isEmpty){
                throw "there is no value in the Queue";
            }
            else{
                front = +1;
                
            }
        }
        
        bool isEmpty(){
            if(arr[front] == -1){
                return true;
            }
            else{
                return false;
            }
        }
    
        
        int Peek(){
            if(isEmpty){
                throw "there is no value to Peek in the Queue";
            }
            else{
                return arr[front];
            }
        }
};





int main(){
    
    Queue queue;
    
    queue.EnQueue(1);
    queue.EnQueue(2);
    queue.EnQueue(3);
    queue.EnQueue(4);
    queue.EnQueue(5);
    queue.EnQueue(0);
    
    queue.Peek();
    
    queue.DeQueue();
    
    queue.Peek();
    
    return 0;
    
}