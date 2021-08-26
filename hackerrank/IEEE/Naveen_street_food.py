for t in range(int(input())):
    #a,b=map(int,input().split())
    n=int(input())
    arr=[]
    prm=0
    ans=0
    for i in range(n):
        arr+=[list(map(int,input().split()))]
    for i in range(n):
        x=(arr[i][1]//(arr[i][0]+1))*arr[i][2]
        if x>prm:
            prm=x
            ans=(arr[i][1]//(arr[i][0]+1))
    print(prm,ans)