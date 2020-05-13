import math
# cook your dish here
def hcf(a,b):
    while b:
        a,b=b,a%b
    return a
for t in range(int(input())):
    #n=int(input())
    m,k=map(int,input().split())
    #arr=list(map(int,input().split()))
    print(hcf(m,k))