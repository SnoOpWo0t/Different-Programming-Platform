# n = int(input())
# a = 5
# b = a**n
# two_dig = b%100
# print(two_dig)
n = int(input())
a = 5
b = pow(a, n, 100)  # This computes (a^n) % 100 efficiently
print(b)
