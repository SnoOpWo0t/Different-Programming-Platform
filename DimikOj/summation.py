t = int(input())
for i in range(t):
    s = input()
    for char in s:
        first = s[0]
        last = s[-1]
        sum = int(first) + int(last)
    print(f"Sum = {sum}")

# for i in range(t):
#     s = input()
#     # Sum the digits in the string
#     digit_sum = sum(int(char) for char in s)
#     print(f"Sum = {digit_sum}")

# t = int(input())
# sum = 0
# for i in range(t):
#     s =input()
#     coma = s.replace("",",")
#     number = int(coma)
#     sum += number
#     print(f"Sum = {sum}")