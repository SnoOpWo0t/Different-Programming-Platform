k,n,w = list(map(int,input().split(" ")))
tprice = 0
for i in range(1,w+1):
 
    price = i*k
    tprice = tprice + price
if tprice > n:
    print(tprice-n)
else:
    print(0)
    

 