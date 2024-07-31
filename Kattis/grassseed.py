seedcost = float(input())
lawns = int(input())
cost = 0

for lawn in range(lawns):
    w,l = list(map(float,input().split()))
    area = w*l
    cost += area*seedcost
print(float(cost))