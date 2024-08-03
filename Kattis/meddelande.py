t, n = list(map(int, input().split()))
new_string = ""

for i in range(t):
    s = input()
    new_string += s.replace(".", "")

print(new_string)

# t , n = list(map(int, input().split()))
# str =[]
# new_str = []
# for i in range (t) :
#     str.append(input())
#     if str[i] != "." :
#         # new_str.append(" ")
#         new_str.append(str[i])
# print(new_str)

# t, n = list(map(int, input().split()))
# strings = []
# new_strings = []
# for i in range(t):
#     s = input()
#     strings.append(s)
#     if s != ".":
#         new_strings.append(s)

# b = " ".join(new_strings).rstrip(".")
# print(b)
