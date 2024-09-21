t = int(input())

def calculate_multiples(x, n):
    multiples = []
    for i in range(x, n+1, x):  # Start from x, go up to n, increment by x
        multiples.append(i)
    return multiples

for _ in range(t):
    x, n = map(int, input().split())
    if x > n:
        print("Invalid!")
    else:
        result = calculate_multiples(x, n)
        for num in result:
            print(num)  # Print each multiple on a new line
