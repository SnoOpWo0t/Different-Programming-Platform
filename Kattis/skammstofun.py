n = int(input())
length = 0
for i in range(n):
    s = input().split(" ")  # Use input().split() to split the input string
    length = len(s) 
for j in range(length):
    for i in range(n):
        # Check if the current string has enough characters
        if len(s[i]) > j:
            print(s[i][j], end="")
    print()  # Move to the next line after printing all characters

