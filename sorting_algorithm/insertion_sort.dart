
/* 
INSERTION SORT FUNCYION IT TAKE AN UNSORTED LIST OF NUMBERS 

CREATE A NEW LIST AND REMOVE ONE ITEM FROM THE UNSORTED LIST AND ADD TO NEW LIST

DO IT AGAIN AFTER FIRST TIME YOU DONE THAT. THEN COMPARE THE ITEM YOU REMOVED FROM THE UNSORTED LIST

TO ITEMS THAT IS IN THE NEW LIST

IF REMOVED ITEM IS GREATER THAN THE LAST ITEM IN THE LIST ADD THE RIGHT SIDE OF THE LIST

ELSE IF REMOVED ITEM IS LESS THE THE LAST ITEM IN THE LIST SWITCH THE ITEM, AND COMPARE THE NEXT LEFT ITEM

RETEAB AGAIN AND AGAIN AND AGAIN

*/


/// insertionSorting on montocally decreasing order
List<int> insertionSorting(List<int> lists){

  for(int i = 0; i < lists.length; i++){
    for(int j = i + 1;  j<lists.length; j++){

      if(lists[j] > lists[i]){
        int temp = lists[i];
        lists[i] = lists[j];
        lists[j] = temp;
      }

    }
  }

  return lists;


}







// Class Based Insertion Sort.
class InsertionSort{

  late List<int> arr;

  sorting(List<int> Prarr){
      arr = Prarr;

      for(int i = 0; i < arr.length -1; i++ )
      {
        for(int j = i + 1; j < arr.length -1; j++ )
        {
         if(arr[j] < arr[i])
         {
          int temp = arr[j];
          arr[j] = arr[i];
          arr[i] = temp;
         } 
        }
      }

  }

  void Print(){
    print(arr);
  }

}



void main(){
  List<int>  arr = [32, 3, 7, 2, 8, 4, 1, 18];
  InsertionSort sort = new InsertionSort();
  sort.sorting(arr);
  print("Insertion Sorting algorithm using clases and objects");
  sort.Print();

  List<int> result = insertionSorting(arr);
  print("Insertion Sorting algorithm using  function or procedures");
  print(result);
  

}