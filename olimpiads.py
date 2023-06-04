# n, m = map(int, input().split())
# original = []

# for i in range(n):
#     original.append(input())

# input()    

# negative = []

# for j in range(n):
#     negative.append(input())

# print(sum(1 for x in range(n) for y in range(m) if original[x][y] == negative[x][y]))      

# n, t1, t2 = map(int, input().split())

# t1, t2 = min(t1, t2), max(t1, t2)
# l = 0
# r = n*t1 + n*t2
# t = (l + r) // 2
# n1 = t // t1
# n2 = (t - t1) // t2
# c = n1 + n2

# while c < n:
#     l = t + 1
#     t = l + (r - l) // 2
#     n1 = t // t1
#     n2 = (t - t1) // t2
#     c = n1 + n2
# else:
#     r = t - 1
#     print(l, t, r)
# print(t)               


# main_n, n = map(int, input().split())

# d = main_n // n
# t = main_n % n

# for i in range(n - t):
#     print(d, end=' ')  

# for j in range(t):    
#     print(d+1, end=' ')      


# n, m = map(int, input().split())
# field = ["."*(m+2)]
# count = 0

# for _ in range(n):
#     field.append(f".{input()}.")

# field.append("."*(m+2))   

# for i in range(1, n+1):
#     for j in range(1, m+1):
#         if field[i][j] == "." and field[i-1][j] == "." and field[i][j-1] == "." and field[i][j+1] == "." \
#         and field[i+1][j] == ".":
#              count += 1

# print(count)

import sys

sys.stdin = open('input.txt', 'r')
data = sys.stdin.readlines()

n, m, j = map(int, [data[0].split(" ")[0], data[0].split(" ")[1], data[0].split(" ")[2]])

field = [".\n" if j == m - 1 else "." for _ in range(n) for j in range(m)]

for i in data[1:]:
    coordinates = list(map(int, i.replace("\n", "").split(" ")))
    field[coordinates[1] - 1 if coordinates[0] == 1 else m * (coordinates[0] - 1) + coordinates[1] - 1] = "*\n" if \
    coordinates[1] == m else "*"

for i in range(n):
    for j in range(m):
        if field[i*m + j] not in "*\n":
            ring = ""
            if j != m - 1:
                ring += field[i*m + j + 1]
            if j != 0:
                ring += field[i*m + j - 1]

            if i != 0:
                ring += field[(i-1) * m + j]
                if j != 0:
                    ring += field[(i-1) * m + j - 1]
                if j != m - 1:
                    ring += field[(i-1) * m + j + 1]  

            if i != n - 1:
                ring += field[(i+1) * m + j]
                if j != 0:
                    ring += field[(i+1) * m + j - 1]
                if j != m - 1:
                    ring += field[(i+1) * m + j + 1]
            count = ring.count("*")    
            field[i*m + j] = f"{count}" if count > 0 else "."
    field[i*m + m - 1] += "\n"     

with open("output.txt", "w", encoding="utf-8") as file:
    file.write("".join(field))
    