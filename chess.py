point = input()

if int(point[1]) % 2 == 0 and point[0] in "ACEG" or int(point[1]) % 2 == 1 and point[0] in "BDFH":
    print("WHITE")
else:
    print("BLACK")