a = input().lower()
b = input().lower()

lenth = len(a)
if len(a) == len(b) :
    if  a[-1] == b[-1] :
        print(2)
    else :
        print(lenth)
