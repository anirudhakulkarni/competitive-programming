import math
# cook your dish here
for t in range(int(input())):
    #n=int(input())
    ans=0
    n,k=map(int,input().split())
    arr=list(map(int,input().split()))
    sum=0
    k=k/100
    for i in range(n-1):
        # TODO: write code...
        sum+=arr[i]
    for i in range(n-1,0,-1):
        # TODO: write code...
        if(arr[i]/sum>k):
            ans+=math.ceil(arr[i]/k-sum)
            sum=math.ceil(arr[i]/k)
        sum-=arr[i-1]
    print(ans)