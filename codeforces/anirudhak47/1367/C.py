# cook your dish here
for t in range(int(input())):
    #n=int(input())
    n,k=map(int,input().split())
    s=input()
    arr=[]
    ans=0
    arr+=[0-k-1]
    for i in range(len(s)):
        if s[i]=='1':
            arr+=[i]
    arr+=[n+k]
    for i in range(len(arr)-1):
        ans+=(arr[i+1]-arr[i]-k-1)//(k+1)
    #arr=list(map(int,input().split()))
    print(ans)