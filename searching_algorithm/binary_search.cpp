//binary search first the list must be sorted


#include <bits/stdc++.h>

using namespace std;

int binary_search(int list[], int index){
    
    int length = sizeof(list) / sizeof(list[0]);
    cout << "length : " << length << endl;
    int first = 0;
    int last = length -1;
    cout << "last : " << last << endl;
    
    int mid_number = floor((first + last) / 2);
    cout << "Mid_number : " << mid_number << endl;
    
    while(index > 0){
        if(list[mid_number] == index){
        return mid_number;
    }
    if(list[mid_number] < index){
        first = mid_number + 1;
    }
    else{
        last = mid_number -1;
    }
    }
    
    return -1;
    
    
    
    
    
}


void verify(auto index){
    if(index != -1){
        cout << "there is index found at : " << index <<endl;
        
    }else{
        cout << "index was not found : " << endl;
    }
}


int main(){
    
    int linear_array[10] = {1,2,3,4,5,6,7,8,9,10};
    int  result = binary_search(linear_array, 7);
    
    verify(result);
    
    return 0;    
}