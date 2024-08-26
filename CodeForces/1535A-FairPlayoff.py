t = int(input())
for _ in range(t):
    a,b,c,d = list(map(int,input().split()))
    win1 = max(a,b)
    lose1= min(a,b)
    win2 =max(c,d)
    lose2 =min(c,d)
    if lose1 > win2 or win1 < lose2 :
        print("NO")
    else :
        print("YES")
    
    