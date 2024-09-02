import math

t = int(input())
for _ in range(t):
    a, b, c = map(int, input().split())
    
    # Check if the sides can form a triangle
    if a + b > c and b + c > a and c + a > b:
        s = (a + b + c) / 2
        area = math.sqrt(s * (s - a) * (s - b) * (s - c))
        print(f"Area = {area:.3f}")
