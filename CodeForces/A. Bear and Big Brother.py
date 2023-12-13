L,B = list(map(int,input().split(" ")))
count = 0
while L<=B:
    L = L*3
    B = B*2
    count = count+1
print(count)