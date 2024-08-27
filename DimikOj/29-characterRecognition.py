t = int(input())

for _ in range(t):
    st = input()
    
    if st.isdigit():
        print("Numerical Digit")
    elif st.islower():
        print("Lowercase Character")
    elif st.isupper():
        print("Uppercase Character")
    else:
        print("Special Character")

# t = int(input())

# def isnum(a):
#     try:
#         int(a)
#         return True
#     except ValueError:
#         return False

# for _ in range(t):
#     st = input()
#     if isnum(st):
#         print("Numerical Digit")
#     elif 97 <= ord(st) <= 122:
#         print("Lowercase Character")
#     elif 65 <= ord(st) <= 90:
#         print("Uppercase Character")
#     else:
#         print("Special Character")
