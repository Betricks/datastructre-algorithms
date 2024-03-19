int climpStairs(int stairs, [Map? memo]){
  if(memo == null) memo = {};
  if(memo.containsKey(stairs)) return memo[stairs];
  if(stairs == 0) return 1;
  if(stairs < 0) return 0;

  memo[stairs] =  climpStairs(stairs -1) + climpStairs(stairs -2);
  return memo[stairs];
}


void main(){
  print(climpStairs(5));
  print(climpStairs(7));
  print(climpStairs(50)); //it does not show, becouse the code run recursively.
}