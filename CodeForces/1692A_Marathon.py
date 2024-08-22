t = int(input())
for _ in range(t):
    count1 = 0
    count2 = 0
    count3 =0
    a,b,c,d = list(map(int,input().split()))
    if b>a :
        count1 +=1
    if c>a :
        count2 +=1
    if d > a:
        count3 +=1
    tot = count1 + count2 + count3
    print(tot)
    