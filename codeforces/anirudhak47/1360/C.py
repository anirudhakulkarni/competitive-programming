# cook your dish here
#n=int(input())
#m,k=map(int,input().split())
#arr=list(map(int,input().split()))
def evencounter(arr):
    res=0
    for i in range(len(arr)):
        if arr[i]%2==0:
            res+=1
    return res
def evencounter2(arr):
    res=0
    for i in range(len(arr)):
        if arr2[i]==0 and arr[i]%2==0:
            res+=1
    return res
def oddcounter(arr):
    res=0
    for i in range(len(arr)):
        if arr[i]%2==1:
            res+=1
    return res
def oddcounter2(arr):
    res=0
    for i in range(len(arr)):
        if arr2[i]==0 and arr[i]%2==1:
            res+=1
    return res
def difcal(arr):
    res=0
    for i in range(len(arr)-1):
        if arr[i+1]-arr[i]==1:
            return True
for t in range(int(input())):
    n=int(input())
    #a,b=map(int,input().split(
    arr=list(map(int,input().split()))
    if evencounter(arr)%2==0 and oddcounter(arr)%2==0:
        print("YES")
    else:
        arr.sort()
        arr2=[0 for i in range(len(arr))]
        if difcal(arr):
            print("YES")
        else:
            print("NO")