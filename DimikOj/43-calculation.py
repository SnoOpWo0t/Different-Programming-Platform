import math

t = int(input())
for _ in range(t):
    p, q, c = map(int, input().split())
    pr = p ** q  # Calculate p raised to the power q
    # mod = math.sqrt((pr % c) ** 2)  # Modulus with c, then square it and find sqrt (which cancels the square)
    mod = (pr % c) 
    result = round(mod)  # Round the result to the nearest integer
    print(f'Result = {result}')
