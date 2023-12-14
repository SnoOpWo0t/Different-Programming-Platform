a = list(map(int,input()))
count = 0
for i in range(len(a)) :
    if a[i]==4 or a[i]==7 :
        count+=1
if count == 4 or count == 7:
    print("YES")
else:
    print("NO")