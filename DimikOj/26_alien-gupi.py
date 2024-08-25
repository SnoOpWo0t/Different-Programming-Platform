t = int(input())
for _ in range(t):
    days = 0
    weight = float(input())
    while weight>1 :
        weight/=2
        days+=1
    print(f'{days} days')