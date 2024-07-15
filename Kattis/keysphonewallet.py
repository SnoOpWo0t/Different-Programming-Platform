n = int(input())
a = [input().strip() for _ in range(n)]

# Define the required items
required_items = ["keys", "phone", "wallet"]

# Find missing items
missing_items = [item for item in required_items if item not in a]

# Print missing items in alphabetical order, or print "ready" if none are missing
if missing_items:
    for item in sorted(missing_items):
        print(item)
else:
    print("ready")




# n = int(input())
# a = [0] * n
# for i in range(n):
#     a[i] = input()
# for i in range(n):
#     if "keys" not in a:
#         print("keys")
#         break
#     elif "phone" not in a:
#         print("phone")
#         break
#     elif "wallet" not in a:
#         print("wallet")
#         break
#     else:
#         print("ready")
#         break
#--------------------
# n = int(input())
# a = [0] * n
# missing_item = ""
# for i in range(n):
#     a[i] = input()
# for i in range(n):
#     if "keys" not in a:
#         missing_item += "keys"
        
#     elif "phone" not in a:
#         missing_item += "phone"
        
#     elif "wallet" not in a:
#         missing_item += "wallet"
        
#     else:
#         print("ready")
#         break
#     print(missing_item)