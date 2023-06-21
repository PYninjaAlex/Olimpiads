from itertools import product

n = int(input())
nums = list(map(int, input().split()))

output = set()

for k in product([0, 1], repeat=n):
    var = 0
    for j in range(n):
        var += nums[j] * k[j]
    output.add(var)

print(len(output))        