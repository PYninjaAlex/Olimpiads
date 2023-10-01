a = int(input())

n = "0"

for i in range(a):
    s = ""
    for c in n:
        s += "1" if c == "0" else "0"
    n += s

print(n)    
