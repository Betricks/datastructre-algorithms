

int? BinarySearch(List<int> list, int target){

  int first = 0;
  int last = list.length - 1;

  while(first < last){

    int middle = (first + last) ~/ 2; 

    if(target > list[middle]) first = list[middle] + 1;
    if(target < list[middle]) last = list[middle] - 1;

    if(list[middle] == target) return list[middle];


  }


  return null;

}



void main(){
  List<int> lists = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30];
  print(BinarySearch(lists, 22));
}