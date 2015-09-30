def sort(lst):
    """
    Sorts lst in place with no return using Insertion Sort
    """
    for i in range(len(lst)):
        pos = i
        for j in range(i)[::-1]:
            if lst[pos] < lst[j]:
                swap(pos, j, lst)
                pos = j
            else:
                break
def swap(i, j, lst):
    temp = lst[i]
    lst[i] = lst[j]
    lst[j] = temp

