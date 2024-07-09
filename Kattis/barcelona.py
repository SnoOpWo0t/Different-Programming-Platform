n , b = list(map(int, input().split()))
a = [0]*n
for i in range (n) :
    a[i] =int(input())
for i in range (n):
    if a[i] == b :
        if i == 0 :
         print("fyrst")
        elif  i == 1:
         print("naestfyrst")
        else :
          print(f'{b+1} fyrst')
          break