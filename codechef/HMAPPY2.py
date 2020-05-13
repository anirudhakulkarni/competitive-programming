# cook your dish here
import math
for t in range(int(input())):
    #n=int(input())
    n,a,b,k=map(int,input().split())
    #arr=list(map(int,input().split()))
    x=n//a
    y=n//b
    lcm=(a*b/math.gcd(a,b))
    z=2*(n//lcm)
    res=x+y-z
    if res>=k:
        print("Win")
    else:
        print("Lose")