def partition(arr, l, h):
    pivot = arr[h]
    j = l - 1
    for i in range(l, h):
        if arr[i] < pivot:
            j += 1
            arr[i], arr[j] = arr[j], arr[i]
    
    arr[j + 1], arr[h] = arr[h], arr[j + 1]
    return j + 1

def quickSort(arr, l, h,k):
    if l < h:
        j = partition(arr, l, h)
        if j==k:
            return arr[j]
        elif j>k:
            quickSort(arr, l, j - 1)
        else: 
            quickSort(arr, j + 1, h)

arr = [3, 2, 4, 1, 5, 7]
k=3
a=quickSort(arr, 0, len(arr) - 1,k)

print(a)
