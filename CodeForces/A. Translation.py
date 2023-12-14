s = input() #1,2,3
t = input() #3,2,1

if len(s) == len(t):
    for i in range(len(s)):
        if s[i] == t[::-1][i]:
            continue  # Continue checking the next pair of characters
        else:
            print("NO")
            break
    else:
        print("YES")  # This will only be executed if the loop completes without breaking
else:
    print("NO")
