t = int(input())

for i in range(t):
    s =input()
    count = 1
   # space = s.replace("", " ")
    for char in s:
        if char == " ":
            count += 1
            continue
        # if char.isnumeric():
        #     count += 1
        print(count)