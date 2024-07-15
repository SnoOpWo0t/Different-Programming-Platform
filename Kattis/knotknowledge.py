# Read the number of knots Sonja needs to learn
n = int(input())

# Read the knots Sonja needs to learn
needed_knots = list(map(int, input().split()))

# Read the knots Sonja has learned
learned_knots = list(map(int, input().split()))

# Sort the lists to ensure proper comparison
needed_knots.sort()
learned_knots.sort()

# Find and print the missing knot
for i in range(n-1):
    if needed_knots[i] != learned_knots[i]:
        print(needed_knots[i])
        break
else:
    # If no mismatch found, the last knot in needed_knots is the missing one
    print(needed_knots[-1])


# n = int(input())
# a =[0]*n
# for i in range(n):
#     a[i] = list(map(int, input().split()))
# b = [0]*(n-1)
# for i in range(n-1):
#     b[i] =  list(map(int, input().split()))
# a.sort()
# b.sort()
# for i in range(n-1):
#     if a[i] != b[i]:
#         print(a[i])
#         break
#     else :
#         print(a[-1])
#         break


