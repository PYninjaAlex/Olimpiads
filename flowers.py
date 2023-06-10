n = int(input())

flowers = ["G", "C", "V"]

for _ in range(n):
    flowers[1], flowers[2] = flowers[2], flowers[1]
    flowers[0], flowers[1] = flowers[1], flowers[0]

print("".join(flowers))

# if n == 1 or (n - 1) % 3 == 0:
#     print("VGC")
# elif n == 2 or (n - 1) % 4 == 0:
#     print("CVG")
# else: print("GCV")    