
int gridTraveler(int r, int c,  [memo = const {}]){
  /* dynamic key = "${r} + ',' ${c}"; */
  if(r == 1 && c == 1) return 1;
  if(r == 0 || c == 0) return 0;
  /* if(key in memo) return memo[key]; */

  return  gridTraveler(r - 1, c, memo) + gridTraveler(r, c -1, memo);
  /* return memo[key]; */
}


void main(){
  print(gridTraveler(2, 3));
  print(gridTraveler(1, 1));
  print(gridTraveler(0, 1));
}