for t in range(int(input())):
    #a,b=map(int,input().split())
    n=int(input())
    arr=list(map(int,input().split()))
    x=""
    for i in range(n//2):
        x+=str(arr[i])[0]
    for i in range(n//2,n):
        x+=str(arr[i])[-1]
    
    if int(x)%11==0:
        print("YES!")
    else:
        print("NO:(")