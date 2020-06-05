import math
# cook your dish here

# cook your dish here
for t in range(int(input())):
    a,b=map(int,input().split())
    #arr=list(map(int,input().split()))
    if a>=b:
        a,b=b,a
    if b%a!=0:
        print(-1)
        continue
    z=b//a
    zz=math.log2(z)
    if zz%1.0!=0.0:
        print(-1)
        continue
    print((zz//3+(zz%3)//2+((zz%3)%2)//1)//1)