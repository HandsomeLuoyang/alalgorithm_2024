import string

n = int(input())
strings = list()
for i in range(n):
    strings.append(input())

max_pre = strings[0]
print(max_pre)

for i in range(1, n): # 遍历所有字符串
    if strings[i].startswith(max_pre): # 前缀可以直接用
        print(max_pre)
        continue
    # 前缀需要做衰减
    for j in range(0, len(max_pre)):
        if j>=len(strings[i]) or max_pre[j] != strings[i][j]:
            max_pre = max_pre[:j]
            if len(max_pre) == 0:
                print('-1')
            else:
                print(max_pre)
            break