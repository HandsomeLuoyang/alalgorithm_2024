n, m = [int(x) for x in input().split(" ")]

strings = []
ans = []
temp_ans = []
for i in range(n):
    strings.append(input().strip())

cur_len = 0
for i, s in enumerate(strings):
    cur_len += len(s)
    cur_len += 1
    if cur_len<m:
        temp_ans.append(s)
    else:
        pass
