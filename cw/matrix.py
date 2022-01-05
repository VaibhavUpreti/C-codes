n = int(input())
m = 2*n-1
start = 0
end = m-1
p = n
res = [[0 for i in range(m)]for j in range(m)]
while end >= start:
    for j in range(start,end):
        res[start][j] = p
    for i in range(start,end):
        res[i][start] = p
    for j in range(start,end+1):
        res[end][j] = p
    for i in range(start,end+1):
        res[i][end] = p
    start = start+1
    end = end-1
    p = p-1
for i in range(m):
    for j in range(m):
        print(res[i][j],end = ' ')
    print()