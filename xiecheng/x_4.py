n, q = input().split()
n, q = int(n), int(q)

nums = [0] + [int(x) for x in input().split()]

for _ in range(q):
    op, l, r = [int(x) for x in input().split()]
    ans = nums[l]
    if op == 1:
        flag = 0 # 0 means & 1 means |
        for i in range(l+1, r+1):
            if flag == 0:
                ans &= nums[i]
                flag = 1
            else:
                ans |= nums[i]
                flag = 0

    else: # op==2
        flag = 1
        for i in range(l+1, r+1):
            if flag == 0:
                ans &= nums[i]
                flag = 1
            else:
                ans |= nums[i]
                flag = 0
    print(ans)