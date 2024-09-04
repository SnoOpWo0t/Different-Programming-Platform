r,b = list(map(int,input().split()))
minn_mixdays = min(r,b)
maxx = max(r,b)
count =0
remain_sock = abs(r-b)
count+=1
print(minn_mixdays , int(remain_sock /2))