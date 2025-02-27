import math

n, m = input().split()
n, m = int(n), int(m)

nums = [int(x) for x in input().split()]

ans = 0


# n 个 分成 m 份
# 暴力dfs

def dfs(layer: int, last_pos: int, temp_ans: int):
    global ans

    if layer > m - 2:
        temp_ans += math.gcd(*nums[last_pos:n])
        ans = max(temp_ans, ans)
        return
    for i in range(last_pos + 1, n):
        val = math.gcd(*nums[last_pos:i])

        temp_ans += val
        dfs(layer + 1, i, temp_ans)
        temp_ans -= val


dfs(0, 0, 0)

print(ans)
