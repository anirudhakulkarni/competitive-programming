for _ in range(int(input())):
    x,y=map(int,input().split())
    a,b=map(int,input().split())
    print(min(min(x,y)*b+abs(x-y)*a,(x+y)*a))