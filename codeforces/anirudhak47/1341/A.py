# cook your dish here
for t in range(int(input())):
    #n=int(input())
    n,a,b,c,d=map(int,input().split())
    #arr=list(map(int,input().split()))
    rlow=int(a-b)
    rhigh=int(a+b)
    clow=int(c-d)
    chigh=int(c+d)
    zz=0
    if (rlow*n>=clow and rlow*n<=chigh)  or (rhigh*n<=chigh and rhigh*n>=clow):
        print("Yes")
    else:
        print("No")
    # if rhigh*n>=clow and rhigh*n<=chigh:
    #     print("Yes")
    # for i in range(rlow,rhigh+1):
    #     if i*n<=chigh and i*n>=clow:
    #         print("Yes")
    #         zz=11
    #         break
    # if zz!=11:
    #     print("No")