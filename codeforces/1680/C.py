def can(pos, m):
    k = len(pos) 
    x = k - m
    for i in range(m + 1):
        l = pos[i]
        r = pos[i + x - 1]
        if r - l + 1 - x <= m:
            return True
    return False    

t = int(input())
for i in range(t):
    s = input()
    pos = []
    n = len(s)
    for i in range(n):
        if s[i] == '1':
            pos.append(i)
    lf = 0
    rg = len(pos)
    while rg - lf > 1:
        mid = (lf + rg) // 2
        if can(pos, mid):
            rg = mid
        else:
            lf = mid
    if len(pos) == 0 or pos[-1] - pos[0] == len(pos) - 1:
        print(0)
    else:
        print(rg)
