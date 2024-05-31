n, m = [int(x) for x in input().split()]

matrix = []
for i in range(n):
    matrix.append([int(x) for x in input().split()])

lu = [0, 0]
ru = [0, 1]
ld = [1, 0]
rd = [1, 1]

ans = 0

while True:
    if matrix[lu[0]][lu[1]]==matrix[ru[0]][ru[1]]==matrix[ld[0]][ld[1]]==matrix[rd[0]][rd[1]]:
            ans+=1
    
    if rd[0] == n-1 and rd[1] == m-2:
        break
    
    if rd[1] == m-1:
        lu[0]+=1
        lu[1] = 0
        
        ru[0] += 1
        ru[1] = 1
        
        ld[0]+=1
        ld[1] = 0
        
        rd[0]+=1
        rd[1]=1
    else:
        lu[1]+=1
        ru[1]+=1
        ld[1]+=1
        rd[1]+=1

print(ans)