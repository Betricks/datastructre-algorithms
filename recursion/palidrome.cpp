#include <bits/stdc++.h>

using namespace std;


bool palindrome(string input){
    
    if(input == " " || input.length() == 1){
        return true;
    }
    
    
    
    if(input.begin() == input.end()){
        return palindrome(input.substr(1, input.length() -1));   
    }
    
    return false;
    
}






int main(){
    
    string palind;
    cout << "enter palindrome word : " << endl;
    cin >> palind;
    
    bool test = palindrome(palind);
    cout << "is palindrome true : " << test << endl;
    
    return 0;
}