for _ in range(int(input())):
    l,r=map(int,input().split())
    res=0
    for i in range(l,r+1):
        if i%4==2:
            x=i
            break
    for i in range(r,l-1,-1):
        if i%4==2:
            y=i
            break
    print(r-l+1-1-(y-x)//4)