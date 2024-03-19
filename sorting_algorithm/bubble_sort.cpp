#include <bits/stdc++.h>

using namespace std;


int main(){
    
    int arr[8] = {12, 3, 1, 7, 22, 13, 30, 9};
    
    cout << "Unsorted : ";
    
    for(int i = 0; i < 8; i++){
        cout<<arr[i]<<"\t";
    }
    
    cout << endl;
    
    for(int i = 0; i<8; i++){
        
        for(int j = i + 1; j < 8; j++){
            
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    
    cout << "Sorted : ";
    
     for(int i = 0; i < 8; i++){
        cout<<arr[i]<<"\t";
    }
    
    
    return 0;
}