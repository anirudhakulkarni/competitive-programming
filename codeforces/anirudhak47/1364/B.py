
for t in range(int(input())):
    n=int(input())
    #n,x=map(int,input().split())
    arr=list(map(int,input().split()))
    res=0
    arr2=[arr[0]]
    for i in range(1,n-1):
        if (arr[i]>=arr[i+1] and arr[i-1]>=arr[i])or (arr[i]<=arr[i+1] and arr[i-1]<=arr[i]):
            continue
        else:
            arr2+=[arr[i]]
    arr2+=[arr[-1]]
    print(len(arr2))
    for i in range(len(arr2)):
        print(arr2[i],end=" ")
    print()