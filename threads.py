# def main():
#     int(input())
#     coordinates = list(map(int, input().split())) 
#     threads = []
#     used = {}
#     for i in coordinates:
#         if not used.get(i):
#           close_i = min([k for k in coordinates if k != i], key=lambda x: abs(i - abs(x)))
#           threads.append(i - close_i if i > close_i else close_i - i)  
#           used[close_i] = True  
#     print(sum(threads))

def main():
    n = int(input())
    coordinates = sorted(list(map(int, input().split()))) 
    threads = [coordinates[1] - coordinates[0]]
    used = {1: True}
    for i in range(2, n-1):
        if not used.get(i):
           min_n = min(coordinates[i] - coordinates[i-1], coordinates[i+1] - coordinates[i])
           if coordinates[i+1] - coordinates[i] == min_n:
               used[i+1] = True
           threads.append(min_n)
    if n > 2 and not used.get(n-1):       
        threads.append(coordinates[n-1] - coordinates[n-2])       
    print(sum(threads))       

if __name__ == '__main__':
	main()