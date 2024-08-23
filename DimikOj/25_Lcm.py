def hcf(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return (a * b) // hcf(a, b)

t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    c = lcm(a, b)
    print(f'LCM = {c}')
