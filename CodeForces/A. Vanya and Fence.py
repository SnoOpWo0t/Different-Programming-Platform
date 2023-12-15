t,fh = list(map(int, input().split(" ")))
f =list(map(int, input().split(" ")))
width = 0
count1 = 0
count2 = 0
for i in range(t):

     if(f[i]<=fh):
        count1+=1
     else:
        count2+=2
print(count1+count2)