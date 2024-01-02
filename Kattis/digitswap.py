a = int(input())
a_str = str(a)  # Convert the integer to a string
size = len(a_str)

for i in range(-1, -size-1, -1):
    print(a_str[i], end="")
