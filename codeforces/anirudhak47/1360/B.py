# cook your dish here
#n=int(input())
#m,k=map(int,input().split())
#arr=list(map(int,input().split()))
for t in range(int(input())):
    n=int(input())
    #a,b=map(int,input().split())
    arr=list(map(int,input().split()))
    arr.sort()
    mini=abs(arr[0]-arr[1])
    for i in range(len(arr)-1):
        if mini>abs(arr[i]-arr[i+1]):
            mini=abs(arr[i]-arr[i+1])
    print(mini)