/// this function takes `int target` and `list<int> numbers` 
/// 
/// it `return` true if the element in the `number` array added together gets the `target`
///  else it `return` false.
dynamic sumCheck(int target, List<int> numbers){
  if(target < 0) return false;
  if(target == 0) return true;

  for(int n in numbers){
    int remainder = target - n;
    if(sumCheck(remainder, numbers) == true) return true;
    
  }
  return false;

}


void main(){
  print(sumCheck(0, [1,3,4,5]));
  print(sumCheck(2, [1,2,3,4,5]));
}