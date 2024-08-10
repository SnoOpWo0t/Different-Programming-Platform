t = int(input())
for i in range(t):
    n = list(map(int, input().split()))
    n.sort()
    sorted_numbers = " ".join(map(str, n))  # Convert the sorted list to a space-separated string
    print(f"Case {i + 1}: {sorted_numbers}")
