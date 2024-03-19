import 'dart:math';

/* 
  Question : Find a non-empty subArray with the Largest Sum ? 
*/



// First We have try to bruteForce the Question and get the answer. O{n * n}
int bruteForce(List<int> numbers){
  int maxSum = 0;
  
  // we iterate it throught two time in every iteration that is why we've got O(n * n) =  O(n^2).
  for(int i =0; i<numbers.length; i++){
    int curSum =0;
    for(int j = i; j<numbers.length; j++){
      curSum = numbers[j];
      maxSum = max(maxSum, curSum);
    }
  }

  return maxSum;
}



// second we used Kadane's algorithm and solved the Question less time complexity. O{n}
int kadaneAlgorithm(List<int> numbers){

  // we are going to throw exception object, becouse the array is an empty
  if(numbers.isEmpty) throw "The array is empty please pass array that has some elements";

  // we iterate it througt only one time that why time complexity it Big O(n)
  int maxSum = numbers[0];

  for(int i=0; i<numbers.length; i++){
      int curSum =0;
      curSum = max(curSum, 0);
      curSum += i;

      maxSum = max(maxSum, curSum);
  }

  return maxSum;

}




void main(){
  print("bruteForce : ${bruteForce([4,-1,2,-7,3,4, 6])}");
  print("bruteForce : ${bruteForce([1,2, -1,2,3,-4,2])}");
  print("kadaneAlgorithm : ${kadaneAlgorithm([4,-1,2,-7,3,4, 6])}");
  print("kadaneAlgorithms : ${kadaneAlgorithm([1,2, -1,2,3,-4,2])}");
  print(kadaneAlgorithm([]));
}