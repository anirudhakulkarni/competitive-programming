import math
for t in range(int(input())):
    n=int(input())
    a=str(bin(n))[2:]
    sum=0
    z=len(a)
    for i in range(z):
        if a[i]=='1':
            sum+=2*(2**(z-i-1))-1
    print(sum)