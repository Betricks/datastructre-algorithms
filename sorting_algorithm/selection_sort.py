def search_smallest(lists: list[int]) -> int:
    smallest: int = lists[0]
    
    for i in range(len(lists)):
        if lists[i] < smallest:
            smallest = lists[i]
            
    
    return smallest

    




def selection_sort(lists: list[int]) -> list[int]:
    
    new_list: list[int] = []
    
    for i in range(len(lists)):
        smallest: int = search_smallest(lists)
        new_list.append(lists.pop(smallest))
    
    return new_list
    
    

    
    
    
print(selection_sort([5,28,12,90,1,33,4,16,9,32,10]))

    