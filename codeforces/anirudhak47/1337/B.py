for _ in range(int(input())):
    x,n,m = list(map(int, input().split()))
    while n > 0:
        x = min(x, x//2+10)
        n -= 1
    while m > 0:
        x -= 10
        m -= 1
    if x > 0:
        print("NO")
    else:
        print("Yes")