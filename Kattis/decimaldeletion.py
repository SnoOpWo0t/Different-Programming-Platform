import math
a = input()
num = float(a)
# Get the decimal part of the number
decimal_part = num - int(num)
# Check if the decimal part is less than 0.5
if decimal_part < 0.5:
    nodecimal = math.floor(num)
else:
    nodecimal = math.ceil(num)

print(nodecimal)
