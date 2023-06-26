def main():
    n, m = map(int, input().split())
    i = 0
    j = 0
    steps = []
    field = [list(map(int, input().split())) for _ in range(n)]
    new_field = [[field[0][0]]]
    for i in range(1, m):
        new_field[0].append(new_field[0][i - 1] + field[0][i])
    for j in range(1, n):  
        new_field.append([new_field[j-1][0] + field[j][0]])
    for i in range(1, n):
        for j in range(1, m):
            new_field[i].append(max(new_field[i - 1][j], new_field[i][j-1]) + field[i][j])
            
    i = n - 1
    j = m - 1
    
    while i != 0 or j != 0:
        if i == 0:
            steps += ['R'] * j
            break
        if j == 0:
            steps += ['D'] * i
            break
        if new_field[i][j-1] > new_field[i-1][j]:
            steps.append('R')
            j -= 1  
        else:
            steps.append('D')  
            i -= 1                  
    print(new_field[n-1][m-1]) 
    print(" ".join(steps[::-1]))   

if __name__ == '__main__':
	main()