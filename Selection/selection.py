def sort(lst):
    """
    Sorts lst in place
    """
    for i in range(len(lst)):
        minIdx = i
        for j in range(i, len(lst)):
            if lst[j] < lst[minIdx]:
                minIdx = j
        swap(minIdx, i, lst)
                
def swap(i ,j, lst):
    temp = lst[i]
    lst[i] = lst[j]
    lst[j] = temp
