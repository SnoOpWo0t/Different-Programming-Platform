import math 
t = int(input())
for i in range(t):
    number = int(input())
    sq_number = int(math.sqrt(number))
    if sq_number**2 == number:
        print("YES")
    else:
        print("NO")



