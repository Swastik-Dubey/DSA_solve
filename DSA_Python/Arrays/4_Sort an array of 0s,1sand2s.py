def sort012(arr, n):
    arr.sort()
    return arr

arr = [0, 2, 1, 0, 2, 1, 0]
a = sort012(arr, len(arr))

for i in range(len(a)):
    print(a[i])
