t = int(input())
tetrahedron = 4
cube = 6
octahedron = 8
dodecahedron = 12
icosahedron = 20
tot = 0

for _ in range(t):
    s = input().lower()
    if s == "tetrahedron":
        tot += tetrahedron
    elif s == "cube":
        tot += cube
    elif s == "octahedron":  # Fixed typo here
        tot += octahedron
    elif s == "dodecahedron":
        tot += dodecahedron
    elif s == "icosahedron":
        tot += icosahedron

print(tot)


    