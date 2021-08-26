# cook your dish here
for t in range(int(input())):
    a,b=map(int,input().split())
    #arr=list(map(int,input().split()))
    if(a==b):
        print(2*a)
        continue
    print(2*max(a,b)-1)
    t=t-1