import re

k = int(input())
ss = input()

ans = re.findall(r"[0-9]+", ss)
ans = [int(x) for x in ans]
ans = sorted(ans, reverse=True)
if k>len(ans):
    print('N')

else:
    print(ans[k-1])