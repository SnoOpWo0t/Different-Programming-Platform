a = input()
upper = 0
lower = 0
for i in a :
    if i.isupper():
        upper = upper + 1
    else:
        lower = lower + 1
if upper > lower:
    print(a.upper())
elif lower>upper or lower == upper:
    print(a.lower())
   