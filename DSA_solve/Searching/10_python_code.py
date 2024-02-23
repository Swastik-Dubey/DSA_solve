def search(nums, target):
    left, right = 0, len(nums) - 1
    
    while left <= right:
        mid = left + (right - left) // 2
        
        if nums[mid] == target:
            return mid
        elif nums[left] <= nums[mid]:
            # Left array is sorted
            if nums[left] <= target < nums[mid]:
                right = mid - 1
            elif nums[left] == target:
                return left
            else:
                left = mid + 1
        else:
            # Right array is sorted
            if nums[mid] < target <= nums[right]:
                left = mid + 1
            elif nums[right] == target:
                return right
            else:
                right = mid - 1
                
    return -1

# Example usage
arr = [10, 20, 40, 60, 5, 8]
x = 20
result = search(arr, x)
print(result)
