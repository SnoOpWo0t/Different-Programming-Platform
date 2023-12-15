t = int(input())
sum = 0
k=0
for i in range(t):
    a, b = map(int, input().split(" "))
    sum = (a+k)-b
    if(sum<0):
        k = 0
    else:
        k = sum
print(sum)
    