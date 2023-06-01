n = int(input())
nums = sorted([int(input()) for x in range(n)])
result = 0

if n > 2:
    for i in range(n-1):
        sum_of_i = nums[i] + nums[i + 1]
        for j in range(i+1, n):
            if nums[j] < sum_of_i:
                var = sum(nums[i:j+1])
                result = max(result, var)
            else:
                break
else:
    result = sum(nums)

print(result)                