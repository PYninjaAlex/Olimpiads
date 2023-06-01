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

sys.stdin = open('INPUT.txt', 'r')
data = sys.stdin.readlines()

n, m, k = map(int, [data[0].split(" ")[0], data[0].split(" ")[1], data[0].split(" ")[2]])

field = [".\n" if j == m - 1 else "." for _ in range(n) for j in range(m)]

for i in data[1:]:
    coordinates = list(map(int, i.replace("\n", "").split(" ")))
    print(coordinates)
    print(field[coordinates[1]])
    field[coordinates[1] - 1 if coordinates[0] == 1 else m * (coordinates[0] - 1) + coordinates[1] - 1] = "*\n" if \
    coordinates[1] == m else "*"

for j in range(m):
    count = 0
    if j == 0 and field[j] != "*":
        if field[j + 1] == "*":
            count += 1
        if field[m + j] == "*":
            count += 1
        if field[m + j + 1] == "*":
            count += 1
        field[j] = f"{count}" if count > 0 else "."

    elif j == m - 1 and field[j] not in "*\n":
        if field[j - 1] == "*":
            count += 1
        if field[m + j] == "*":
            count += 1
        if field[m + j - 1] == "*":
            count += 1
        field[j] = f"{count}\n" if count > 0 else "."

    elif field[j] not in "*\n":
        if field[j + 1] == "*":
            count += 1
        if field[m + j] == "*":
            count += 1
        if field[m + j + 1] == "*":
            count += 1
        if field[j - 1] == "*":
            count += 1
        if field[m + j - 1] == "*":
            count += 1
        field[j] = f"{count}" if count > 0 else "."

for i in range(1, n - 1):
    for j in range(m):
        count = 0
        if j == 0 and field[(i*m) + j] != "*":
            if field[(i - 1) * m + j + 1] == "*":
                count += 1
            if field[(i - 1) * m + j] == "*":
                count += 1
            if field[m*i + j + 1] == "*":
                count += 1
            if field[m * (i + 1) + j] == "*":
                count += 1
            if field[m * (i + 1) + j + 1] == "*":
                count += 1
            field[j] = f"{count}" if count > 0 else "."

        elif j == m - 1 and field[(i*m) + j] not in "*\n":
            if field[(i - 1) * m + j - 1] == "*":
                count += 1
            if field[(i - 1) * m + j] == "*":
                count += 1
            if field[m*i + j - 1] == "*":
                count += 1
            if field[m * (i+1) + j] == "*":
                count += 1
            if field[m * (i+1) + j - 1] == "*":
                count += 1
            field[j] = f"{count}\n" if count > 0 else "."

        elif field[(i*m) + j] not in "*\n":
            if field[i*m + j + 1] == "*":
                count += 1
            if field[(i-1)*m + j] == "*":
                count += 1
            if field[m + j + 1] == "*":
                count += 1
            if field[j - 1] == "*":
                count += 1
            if field[m + j - 1] == "*":
                count += 1
            field[j] = f"{count}" if count > 0 else "."

# print(f"{data}\n{n} {m} {k}")
print("".join(field))
