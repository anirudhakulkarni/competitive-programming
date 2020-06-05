# cook your dish here
for t in range(int(input())):
    #n=int(input())
    m,k=map(int,input().split())
    #arr=list(map(int,input().split()))
    if m==2:
        print(k)
    elif m==1:
        print(0)
    else:
        print(2*k)