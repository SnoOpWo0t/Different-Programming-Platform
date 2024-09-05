t = int(input())
for _ in range(t):
    a = int(input())
    if a <=1399:
        print("Division 4")
    elif 1400<= a <=1599:
        print("Division 3")
    elif 1600<= a <=1899:
        print("Division 2")
    elif 1900<=a:
        print("Division 1")