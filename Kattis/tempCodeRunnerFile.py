n = int(input())
a = []
b =[0]*n
for i in range(n):
   a.append(int(input()))

b = a[::-1]
print(b)