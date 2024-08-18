t = int(input())
for _ in range(t):
    s = input()
    count = 0
    for i in s:
        if i in 'aeiouAEIOU':
            count += 1
    print(f'Number of vowels = {count}')