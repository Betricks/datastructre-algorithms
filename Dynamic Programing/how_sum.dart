dynamic howSum(int targetSum, List<int> numbers, [Map? memo])
{
  if(memo == null) memo = {};
  if(memo.containsKey(targetSum)) return memo[targetSum];
  if(targetSum == 0) return [];
  if(targetSum < 0) return null;

  for(int n in numbers)
  {
    int remainder = targetSum - n;
    List<dynamic>? remainderResult = howSum(remainder, numbers);
    if(remainderResult != null){
      memo[targetSum] =  [...remainderResult, n];
      return memo[targetSum];
    }
  }

  memo[targetSum] = null;
  return null;

}


void main(){
  print(howSum(7, [2,3]));
  print(howSum(7, [2,4]));
  print(howSum(7, [5,3,4,7]));
  print(howSum(23, [7,15]));
}