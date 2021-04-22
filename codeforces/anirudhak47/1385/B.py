# cook your dish here
for t in range(int(input())):
    n=int(input())
    n=n*2
    #m,k=map(int,input().split())
    arr=list(map(int,input().split()))
    arr2=[]
    for i in range(n):
        if arr[i] not in arr2:
            arr2+=[arr[i]]
    for i in range(len(arr2)):
        print(arr2[i],end=" ")
    print()