
# input_string = input()

# # Ensure the input string is in the form of "he...ey"
# if input_string.startswith("h") and input_string.endswith("y"):
#     # Count the number of 'e's in the input string
#     num_e = input_string.count('e')
    
#     # Construct the response string with twice as many 'e's
#     response_string = "h" + "e" * (2 * num_e) + "y"
    
#     # Print the response string
#     print(response_string)
# else:
#     print("Invalid input. Please enter a greeting in the form of 'he...ey'.")

s = input()
num_e = s.count('e')
print("h" + "e" * (2 * num_e) + "y")