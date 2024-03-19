import 'dart:math';

int houseRobery(List<int> houses)
{
  int rob1 = 0;
  int rob2 = 0;

  for(int n in houses)
  {
    int temp = max(n + rob1, rob2);
    rob1 = rob2;
    rob2 = temp;
  }

  return rob2;

}


void main(){
  print(houseRobery([1,2,3,1]));
}