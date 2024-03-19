/// Memoization : is one of the overall strateges to solve Dynamic problems,
///  is used to store some duplicate subproblems to get the results latter on.
int fib(int n){
  if(n <= 2) return 1;
  return fib(n -1) + fib(n -2);
}

void main(){
  print(fib(3));
  print(fib(7));

}