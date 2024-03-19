
bool slidingWindow(List<int> numbers, int k){

  Set window = new Set();
  int l = 0;
  for(int r = 0; r < numbers.length; r++){
    if(r - l + 1 > k){ 
      window.remove(numbers[l]);
      l += 1;
    }
    if(window.contains(numbers[r])) return true;
    window.add(numbers[r]);

  }
  return false;

}


void main(){
  print(slidingWindow([1,2,3,2,3,3], 3));
  print(slidingWindow([3,1,4,5,6,2,7,6], 3));
}