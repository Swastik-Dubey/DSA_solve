
def merge_sort(arr, l, r):
    if l < r:
        m = (l + r) // 2
        merge_sort(arr, l, m)
        merge_sort(arr, m + 1, r)
        merge(arr, l, m, r)

def merge(arr, l, m, r):
    n1 = m - l + 1
    n2 = r - m

    # Create temporary arrays
    left = [0] * n1
    right = [0] * n2

    # Copy data to temporary arrays left[] and right[]
    for i in range(n1):
        left[i] = arr[l + i]
    for j in range(n2):
        right[j] = arr[m + 1 + j]

    # Merge the temporary arrays back into arr[l..r]
    i = 0  # Initial index of first subarray
    j = 0  # Initial index of second subarray
    k = l  # Initial index of merged subarray

    while i < n1 and j < n2:
        if left[i] <= right[j]:
            arr[k] = left[i]
            i += 1
        else:
            arr[k] = right[j]
            j += 1
        k += 1

    # Copy the remaining elements of left[], if there are any
    while i < n1:
        arr[k] = left[i]
        i += 1
        k += 1

    # Copy the remaining elements of right[], if there are any
    while j < n2:
        arr[k] = right[j]
        j += 1
        k += 1

# Example usage:
a = [1, 4, 2, 3]
n = len(a)
merge_sort(a, 0, n - 1)
print(a)
