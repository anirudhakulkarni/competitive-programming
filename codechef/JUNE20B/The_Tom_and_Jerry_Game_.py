# cook your dish here
def highestPowerOf2(n):  
  
    return (n & (~(n - 1)))  
for t in range(int(input())):
    ts=int(input())
    sum=0
    if ts%2==1:
        print((ts-1)//2)
    else:
        x=highestPowerOf2(ts)
        
        print(ts//((x*2)))
