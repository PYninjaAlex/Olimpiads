def main():
    n, m = map(int, input().split())
    output = 0
    i = 0
    j = 0
    start = 0
    field = [list(map(int, input().split())) for _ in range(n)]
    new_field = [[field[0][0]]]
    for i in range(1, m):
        new_field[0].append(new_field[0][i - 1] + field[0][i])
    for j in range(1, n):  
        new_field.append([new_field[j-1][0] + field[j][0]])
    for i in range(1, n):
        for j in range(1, m):
            new_field[i].append(min(new_field[i - 1][j], new_field[i][j-1]) + field[i][j])
    print(new_field[n-1][m-1])     

if __name__ == '__main__':
	main()