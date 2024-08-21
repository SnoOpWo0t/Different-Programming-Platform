t = int(input())
# Create a list of alphabets corresponding to their position in the alphabet
alphabets = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26]

for _ in range(t):
    s = input().lower()  # Convert  string to lowercase
    for char in s:
        if 'a' <= char <= 'z': 
            index = ord(char) - ord('a')  # Find the position in the alphabet
            print(alphabets[index],end ="")
    print()
        
