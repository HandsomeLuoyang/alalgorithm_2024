import string

n = int(input())
strings = list()
for i in range(n):
    strings.append(input())

max_pre = strings[0]
print(max_pre)

for i in range(1, n): # ���������ַ���
    if strings[i].startswith(max_pre): # ǰ׺����ֱ����
        print(max_pre)
        continue
    # ǰ׺��Ҫ��˥��
    for j in range(0, len(max_pre)):
        if j>=len(strings[i]) or max_pre[j] != strings[i][j]:
            max_pre = max_pre[:j]
            if len(max_pre) == 0:
                print('-1')
            else:
                print(max_pre)
            break