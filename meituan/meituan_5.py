def count_unique_subsequences(s):
    n = len(s)
    dp = [[0] * 10 for _ in range(n)]
    
    # 初始化第一个字符
    dp[0][int(s[0])] = 1
    
    # 动态规划填表
    for i in range(1, n):
        current_char = int(s[i])
        sum_prev = sum(dp[i-1])  # 上一行的总和
        for j in range(10):
            dp[i][j] = dp[i-1][j]  # 首先继承上一个位置的值
            
        dp[i][current_char] = sum_prev  # 以当前字符结尾的新值

    # 计算最终结果
    return sum(dp[n-1])

# 假设 s 是输入的字符串
s = "12123"  # 示例字符串，实际应用中应从输入读取
result = count_unique_subsequences(s)
print(result)
