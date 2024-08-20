def is_prime(n):
    if n <= 1:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    for i in range(3, int(n**0.5) + 1, 2):
        if n % i == 0:
            return False
    return True

t = int(input())
for _ in range(t):
    a, b = list(map(int, input().split()))
    prime_count = 0
    for i in range(a, b + 1):  # include b in the range
        if is_prime(i):
            prime_count += 1
    print(prime_count)
