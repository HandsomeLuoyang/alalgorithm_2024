import re

base = input()
base_re = '.*' + '.*'.join(base) + '.*'

n = int(input())

str_set = set()
ans_num = 0
ans_list = []

for i in range(n):
    cur_str = input()
    obj = re.search(base_re, cur_str)
    if obj is not None:
        if cur_str not in str_set:
            ans_num += 1
            str_set.add(cur_str)
            ans_list.append(i+1)

print(ans_num)
for num in ans_list:
    print(num,end=' ')