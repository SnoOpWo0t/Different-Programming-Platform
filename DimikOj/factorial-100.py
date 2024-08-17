import math
t = int(input())
for i in range(t):
    n = int(input())
    fac = math.factorial(n)
    
    # Counting the number of trailing zeros in the factorial
    count_zeros = 0
    power_of_5 = 5
    while n // power_of_5 > 0:
        count_zeros += n // power_of_5 
        power_of_5 *= 5
    
    print(count_zeros)
