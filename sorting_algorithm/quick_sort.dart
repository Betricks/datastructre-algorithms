


/* 
Pick a pivot.
Partition the array into two sub-arrays: elements less than the pivot  and elements greater than the pivot.
Call quicksort recursively on the two sub-arrays.
 */



List<int> quickSort(List<int> nums){
  

  if(nums.length < 2) return nums;

  else{
    int pivot = nums[0];
    List<int> less = [];
    List<int> greater = [];
 
    
    for(int i = 1; i< nums.length; i++){
      if(nums[i] < pivot){
        less.add(nums[i]);
      }else{
        greater.add(nums[i]);
      }
    }

  }

  return quickSort(less) + [pivot] + quickSort(greater);



}


void main(){

  print(quickSort([3,7,1,5,4,2,6]));

}