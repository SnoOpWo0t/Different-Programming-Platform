t = int(input())

def is_sorted(arr):
    sorted_arr = sorted(arr)
    if arr == sorted_arr:
        return "YES"
    else:
        return "NO"

for _ in range(t):
    n = int(input())
    arr = []
    for i in range(n):
        num = int(input())
        arr.append(num)
    
    print(is_sorted(arr))

    
# t = int(input())
# for _ in range(t):
#     n = int(input())
#     arr = list(map(int, input().split()))

#     is_sorted = True
#     max_value = float('-inf')
#     min_value = float('inf')

#     for i in range(1, n):
#         if arr[i] == arr[i - 1]:
#             continue
#         elif arr[0] < arr[1]:  # Ascending order check
#             if arr[i] > max_value:
#                 max_value = arr[i]
#             else:
#                 is_sorted = False
#                 break
#         elif arr[0] > arr[1]:  # Descending order check
#             if arr[i] < min_value:
#                 min_value = arr[i]
#             else:
#                 is_sorted = False
#                 break

#     if is_sorted:
#         print("YES")
#     else:
#         print("NO")