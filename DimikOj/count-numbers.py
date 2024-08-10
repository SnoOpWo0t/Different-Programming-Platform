t = int(input())
for i in range(t):
    s = input()
    count = len(s.split())  # Split the string by spaces and count the segments
    print(count)

# t = int(input())

# for i in range(t):
#     s =input()
#     count = 1
#    # space = s.replace("", " ")
#     for char in s:
#         if char == " ":
#             count += 1
#             continue
#     print(count)