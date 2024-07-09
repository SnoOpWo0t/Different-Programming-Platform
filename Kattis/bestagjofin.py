n = int(input())
a = [0]*n # a is a list of names
b = [0]*n # b is a list of points
max = 0
index = 0
for i in range(n):
    name,point = input().split() # name is a string, point is a string
    point = int (point) # convert point to integer
    a[i] = name # store name in a
    b[i] = point # store point in b
for i in range(n):
    if b[i] > max:
        max = b[i]
        index = i # store the index of the max point
print(a[index])