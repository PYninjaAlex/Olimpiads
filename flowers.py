n = int(input())

# flowers = ["G", "C", "V"]

# for _ in range(n):
#     flowers[1], flowers[2] = flowers[2], flowers[1]
#     flowers[0], flowers[1] = flowers[1], flowers[0]

# print("".join(flowers))

if (n - 1) % 3 == 0:
    print("VGC")
elif (n - 1) % 3 == 1:
    print("CVG")
else: print("GCV")    