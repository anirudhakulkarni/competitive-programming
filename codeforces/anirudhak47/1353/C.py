# cook your dish here

for t in range(int(input())):
    n=int(input())
    res=0
    if n==1:
        print(0)
    else:
        for i in range(1,(n+1)//2):
            res+=8*i*i
        print(res)