# cook your dish here
#n=int(input())
#m,k=map(int,input().split())
#arr=list(map(int,input().split()))
for t in range(int(input())):
    #n=int(input())
    a,b=map(int,input().split())
    #arr=list(map(int,input().split()))
    a1=min(a,b)
    b1=max(a,b)
    print(max(2*a1,b1)**2)