import math
def smallestDivisor(n,k): 
    # if divisible by 2 
    for i in range(int(min(math.sqrt(n),math.sqrt(k))),1,-1):
        if n%i==0 :
            return i  
    return min(n,k); 
for t in range(int(input())):
    #n=int(input())
    a,b=map(int,input().split())
    if a<=b:
        print(1)
    else:
        x=smallestDivisor(a,b)
        if x==a or x==b:
            print(a)
        else:
            print(x)