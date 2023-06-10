n = int(input())


output = [n // 144]
n -= 144 * output[0]

if n >= 134:
    output[0] += 1
    output.extend([0, 0])

else:
    if n >= 12:
        output.append(n // 12)
        n -= 12 * output[1]    

    else:
        output.append(0)
            

    if n >= 10:
        output[1] += 1
        output.append(0)
    else:
          output.append(n)    

print(" ".join(map(str, output)))