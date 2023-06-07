def main():
    int(input())
    coordinates = list(map(int, input().split())) 
    threads = []
    used = {}
    for i in coordinates:
        if not used.get(i):
          close_i = min([k for k in coordinates if k != i], key=lambda x: abs(i - abs(x)))
          threads.append(i - close_i if i > close_i else close_i - i)  
          used[close_i] = True  
    print(sum(threads))


if __name__ == '__main__':
	main()