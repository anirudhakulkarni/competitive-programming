import math
for _ in range(int(input())):
    l,r=map(int,input().split())
    res=0
    for i in range(l,r+1):
        #print(math.gcd(int(i//16+i%16),i))
        if math.gcd(int(i//16+i%16),i)>1:
            print(i)
            res+=1
    print(res)
