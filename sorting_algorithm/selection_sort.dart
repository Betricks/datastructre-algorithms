

int findSmallest(List<int> lists){

  int smallest = lists[0];
  /* int smallestIndex = 0; */

  for(int i = 1; i < lists.length; i++){

    if(lists[i] < smallest){
      smallest = lists[i];
      /* smallestIndex = i; */
    }

  }

  return smallest;

}


List<int> selectionSort(List<int> lists){

  List<int> newList = [];


  for(int i = 0; i < lists.length; i++){

    int smallest = findSmallest(lists);

    newList.add(smallest);

    lists.remove(smallest);


  }


  return newList;


}


void main(){

  print(selectionSort([7,4,19,33,2,10,48,22,13,1,88,0,92,30,6]));

  /* print(findSmallest([6,3,88,90,1,17,60,40,30,20,15,99,1000])); */

}