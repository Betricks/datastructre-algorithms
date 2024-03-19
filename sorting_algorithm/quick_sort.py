


# Pick a pivot.
# Partition the array into two sub-arrays: elements less than the pivot  and elements greater than the pivot.
# Call quicksort recursively on the two sub-arrays.


def quicksort(array):
    if len(array) < 2:
        return array
    else:
        pivot = array[0]
        
        less = [i for i in array[1:] if i <= pivot] 
        greater = [i for i in array[1:] if i > pivot] 
 
        return quicksort(less) + [pivot] + quicksort(greater)

print(quicksort([10, 5, 2, 3]))






# FUNCTION quickSort PRAMETER = LIST OF NUMBERS

#     CHOOSE A PIVOT NUMBER FROM THE LIST -> CHOOSE THE MIDDLE NUMBER
    
#     IF SIZE OF ARRAY LESS THAN OR EQUAL TO 1 THEN
#         RETURN THE ARRAY
    
#     IF SIZE OF ARRAY EQUAL TO 2 THEN
#         COMPARE LEFT VALUE TO RIGHT VALUE 
#         SWAP IF THE RIGHT VALUE IS GREATER THAN THE LEFT VALUE
        
    
    
#     CALL THE FUNCTION RECURSIVELY BY PASSING LEFT SIDE OF THE PIVOT ADD CALL THE FUNCTION RECURSIVELY BY PASSING RIGHT SIDE OF THE PIVOT  
    
#     STORE TO NEWFUNCTION 
#         AND THE RETURN IT
        
        
        



def quck_sort(nums: list[int]) -> list[int]:
    """ My implementation of quck_sort algorithms.

        if used psaudocode to write this algorithm of my own
        
        but still it does'nt solve any or sort the array
        
    """
    first: int = 0
    last: int = len(nums) -1
    pivot: int = first + last // 2
    
    if len(nums) < 2:
        return nums
    
    if len(nums) == 2:
        if nums[first] > nums[last]:
            temp: int = nums[last]
            nums[last] = nums[first]
            nums[first] = temp
        # return nums
    
    quck_sort(nums[0:pivot])
    quck_sort(nums[pivot:])
    
    return nums
    

# print(quck_sort([3,7,1,5,4,2,6]))
    
