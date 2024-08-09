
t = int(input())
for b in range(t):
    n = int(input())
    print(f"Case {b+1}:", end=" 1")
   
    for i in range(2, n+1):
        if n % i == 0:
            print(f" {i}", end="")
    print()  # This ensures a newline after each test case
