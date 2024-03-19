#include <bits/stdc++.h>

using namespace std;



int SumNaturalNumbers(int inputNumber){
    
    
    if(inputNumber <= 1){
        return  inputNumber;
    }
    
    return inputNumber + SumNaturalNumbers(inputNumber - 1);
    
    
    
}



int main(){
    
    int result = SumNaturalNumbers(5);
    cout << "Result : " << result << endl;
    
    int result2 = SumNaturalNumbers(10);
    cout << "Result2 : " << result2 << endl;
    
    
    return 0;
    
}