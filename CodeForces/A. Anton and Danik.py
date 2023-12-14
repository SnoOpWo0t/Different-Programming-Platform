a = int(input())
A = 0
D = 0
# for i in range(a):
#     b = input()
b = input()

for i in range(len(b)) :
    if b[i]=='A' :
        A+=1
    else :
        D+=1
if A>D :
    print("Anton")
elif D>A :
    print("Danik")
elif A==D:
    print("Friendship")
    