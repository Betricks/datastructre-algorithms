/* 
  we have used twoPointers to these problems 
*/



// it returns true if a given array is aplindrome 
// else returns false.
bool twoPointersPalindrome(List<int> numbers){

  int left = 0;
  int right = numbers.length -1;

  while(left < right){
    if(numbers[left] != numbers[right]) return false;
    left +=1;
    right -=1;
  }

  

  return true;

}


// it returns Array of two elements, if the two elements added together is equal to the target.
// else if it doesn't, it returns simply null.
List<int>? twoPointersTargetSum(int target, List<int> numbers){

  int left = 0;
  int right = numbers.length -1;
  while(left < right){
    if(numbers[left] + numbers[right] > target){
      right -=1;
    }
    if(numbers[left] + numbers[right] < target){
      left += 1;
    }
    else if (numbers[left] + numbers[right] == target){
      return [numbers[left], numbers[right]];
    }
  }
  return null;
}


void main(){

  print(twoPointersPalindrome([1,2,5,5,2,1]));
  print(twoPointersPalindrome([1,2,3,5,6,2,1]));
  print(twoPointersPalindrome([1,2,3,4,3,2,1]));

  print('targetSum : ${twoPointersTargetSum(7, [2,3,5,7,8, 9])}');
  print('targetSum : ${twoPointersTargetSum(6, [1,2,3,5,7,8, 9])}');

}