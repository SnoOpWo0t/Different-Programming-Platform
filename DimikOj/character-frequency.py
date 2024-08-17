t = int(input())
for i in range(t):
    s = input()
    cha =input()
    occur = 0
    for c in s:
        if c == cha:
            occur += 1
    if occur>0:
        print(f"Occurrence of '{cha}' in '{s}' = {occur}")
    else:
        print(f"'{cha}' is not present")
