steps: str = input()
 
count_1 = steps.count("1")
count_2 = steps.count("2")

print(1 + (count_1 - count_2 if count_1 > count_2 else count_2 - count_1))