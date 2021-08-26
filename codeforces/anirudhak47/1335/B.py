for _ in range(int(input())):
    n,a,b=map(int,input().split())
    print(('abcdefghijklmnopqrstuvwxyz'[:b]*n)[:n])