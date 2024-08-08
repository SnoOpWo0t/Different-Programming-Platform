def print_numbers():
    count = 0
    for i in range(1000, 0, -1):
        print(f"{i}", end='\t')
        count += 1
        if count % 5 == 0:
            print()  # Move to the next line after printing 5 numbers

# Call the function
print_numbers()
