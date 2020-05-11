# cook your dish here
for t in range(int(input())):
    n=int(input())
    #m,k=map(int,input().split())
    arr=list(map(int,input().split()))
    print(arr.index(min(arr))+1)