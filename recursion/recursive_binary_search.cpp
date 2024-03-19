#include <bits/stdc++.h>

using namespace std;

int binarySearch(int list[], int left, int right, int mid, int target){
    
        if(list[mid] == target){
            return list[mid];
        } 
        
        if(list[mid] < target){
            return  binary_search(list, left, mid - 1, mid, target);
        }else{
            return  binary_search(list, mid + 1, right, mid, target);
        }
        
        return  binary_search(list, left, right, mid, target);
    
}
