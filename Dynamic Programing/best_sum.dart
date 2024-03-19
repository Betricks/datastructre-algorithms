/// this function takes `int` `targetSum` and `List<int>` `numbers`
/// 
/// and it it return the shortestPath that you can get the targetSum by adding elements  `List<int>` `numbers`.
List<int>? bestSum(int targetSum, List<int> numbers, [Map? memo]){
  if(memo == null) memo = {};
  if(targetSum == 0) return [];
  if(targetSum < 0) return null;
  if(memo.containsKey(targetSum)) return memo[targetSum];
  List<int>? shortestPath;
  for(int n in numbers){
    var remainder = targetSum - n;
    List<int>? remainderResult = bestSum(remainder, numbers, memo);
    if(remainderResult != null){
        var combination = [...remainderResult, n];
      if(shortestPath == null || combination.length < shortestPath.length){
        shortestPath = combination;
      }
    }

  }
  memo[targetSum] = shortestPath;
  return shortestPath;


}



void main(){
  print(bestSum(8, [2,3,5]));
  print(bestSum(7, [5,2,7]));
  print(bestSum(100, [1,2,5,10,25]));
}