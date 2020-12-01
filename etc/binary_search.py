def binary_search(arr, target, left, right):
  mid = (left + right) // 2
  if left > right:
    return None
  elif target == arr[mid]:
    return mid
  elif arr[mid] < target:
    return binary_search(arr, target, mid+1,right)
  else:
    return binary_search(arr, target, left, mid-1)


arr = [1,2,3,4,5,6,11,7,8,9,10]
arr.sort()
print(binary_search(arr, 7, 0, 10))
