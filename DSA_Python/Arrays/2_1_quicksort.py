def partition(arr, l, h):
    pivot = arr[h]
    j = l - 1
    for i in range(l, h):
        if arr[i] < pivot:
            j += 1
            arr[i], arr[j] = arr[j], arr[i]
    
    arr[j + 1], arr[h] = arr[h], arr[j + 1]
    return j + 1

def quickSort(arr, l, h):
    if l < h:
        j = partition(arr, l, h)
        quickSort(arr, l, j - 1)
        quickSort(arr, j + 1, h)

arr = [3, 2, 4, 1, 5, 7]
quickSort(arr, 0, len(arr) - 1)

for i in range(len(arr)):
    print(arr[i])
