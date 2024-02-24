def main():
    n = int(input())
    a = list(map(int, input().split()))

    min_a = min(a)
    max_a = max(a)

    if min_a == max_a:
        print((n * (n - 1)) // 2)
        return 0;
    print(a.count(min_a) * a.count(max_a)) 
    return 0;
        
        
if __name__ == '__main__':
    main()        