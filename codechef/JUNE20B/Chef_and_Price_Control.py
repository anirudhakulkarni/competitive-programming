# cook your dish here
for t in range(int(input())):
    #n=int(input())
    sum=0
    m,k=map(int,input().split())
    arr=list(map(int,input().split()))
    for i in range(m):
        if arr[i]>k:
            sum+=arr[i]-k
    print(sum)