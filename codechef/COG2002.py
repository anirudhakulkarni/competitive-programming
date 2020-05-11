# cook your dish here
for t in range(int(input())):
    n=int(input())
    #m,k=map(int,input().split())
    arr=list(map(int,input().split()))
    arr+=arr
    res=arr[0]+arr[1]+arr[2]
    max=res
    for i in range(1,n):
        res=res-arr[i-1]+arr[i+2]
        if max<res:
            max=res
    print(max)    
  