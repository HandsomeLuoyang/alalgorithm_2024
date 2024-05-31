'''
2(AN)
BA3A3ABB

2(A2(N))
A3322A33P20BB

A5(N)
A3322A33P20BB

2(A2(N2(A)))
AabCZz0909
'''

pattern = input()
target = input()


def pattern_handle(pattern:str):
    # 用栈将它打开
    stk = []
    temp_stk = []
    
    for s in pattern:
        if s !=')':
            # 直接入栈
            stk.append(s)
        if s == ')':
            # 出栈直到碰到括号，将其扩充为前面的数字遍
            while stk[-1] !='(':
                temp_stk.append(stk.pop())
            # 碰到了左括号了，直接pop掉
            stk.pop()
            # 碰到数字了，进行乘法运算
            num = int(stk.pop())
            
            temp_stk.reverse()
            temp_stk = num*temp_stk
            
            stk.extend(temp_stk)
            temp_stk.clear()
    return ''.join(stk)

# 将给定的字符串全部转换为AN再直接用find就可以
def handle_target(target):
    target2 = ''
    for s in target:
        if 'a' <= s <= 'z' or 'A' <= s<='Z':
            target2+='A'
        else:
            target2+='N'
    return target2

    
    
# 之后使用模式匹配
pattern2 = pattern_handle(pattern)
target2 = handle_target(target)
# print(pattern2)
# print(target2)

idx = target2.find(pattern2)

if idx == -1:
    print('!')

else:
    print(target[idx:idx+len(pattern2)])