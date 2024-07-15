a = input()
b = a.count('b')
k = a.count('k')
if b > k:
    print("boba")
elif k > b:
    print("kiki")
elif k == 0 and b == 0:
    print("none")
elif k == b:
    print("boki")
