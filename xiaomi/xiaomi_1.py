n = int(input())

nums = [int(x) for x in input().split()]

abs_min = 1e12

_sum = 0

flag = 0

for num in nums:
    _sum += abs(num)
    if num<0:
        flag += 1
    abs_min = min(abs_min, abs(num))

if flag %2 == 0:
    print(_sum)
else:
    print(_sum-abs_min)