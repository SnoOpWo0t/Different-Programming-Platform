t = int(input())

for case in range(t):
    n = int(input())
    
    for i in range(n):
        print('*' * n)
    
    # Print a blank line between squares, but not after the last one
    if case < t - 1:
        print()

# test = int(input())
#     for test in range(test):
#         n = int(input())
#         for i in range(1,n+1):
#             for j in range(1,n+1):
#                 print('*',end='')
#             print() ---
     