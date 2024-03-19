#include <bits/stdc++.h>

using namespace std;


class ArrayStack{
    
    int Arr[10];
    
    int top = -1;
        public:
        void push(int value){
                top = top +1;
                Arr[top] = value;
        }
        
        void pop(){
            top = top -1;
        }
        
        bool isEmpty(){
            if(top == -1){
                return true;
            }
            else{
                return false;
            }
        }
        
        int Top(){
            return Arr[top];
        }
        
};



int main(){
    
    ArrayStack stackArray;
    
    stackArray.push(1);
    stackArray.push(2);
    stackArray.push(3);
    stackArray.push(4);
    stackArray.push(5);
    
    cout << "isEmpty : " << stackArray.isEmpty() << endl;
    cout << "Top No : " << stackArray.Top() << endl;
    
   
    
    return 0;
}