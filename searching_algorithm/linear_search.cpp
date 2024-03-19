//linear algorithm 
    //1. start at the begining
    //2. compare current value to the target
    //3. move sequentialy
    //4. reach the end of the list
    
#include <bits/stdc++.h>

using namespace std;


    
int linear_search(int list[], int  value){
    int length = sizeof(list) / sizeof(list[0]);
    for(int i = 0; i<=length; i++){
        if(list[i] == value){
            return i;
        }else{
            return 0;
        }
    }
}


void verify(auto index){
    if(index == 0){
        cout << "there is index found : " << index <<endl;
        
    }else{
        cout << "index was no found : " << endl;
    }
}


int main(){
    int linear_array[10] = {1,2,3,4,5,6,7,8,9,10};
    auto result = linear_search(linear_array, 6);
    verify(result);
    
    
    return 0;
}