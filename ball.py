n = int(input())

steps = [0 for _ in range(n+1)]

steps[n] = 1

for i in range(n, -1, -1):
    if i - 1 >= 0: steps[i - 1] += steps[i]
    if i - 2 >= 0: steps[i - 2] += steps[i] 
    if i - 3 >= 0: steps[i - 3] += steps[i] 
    
print(steps[0])    