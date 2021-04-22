for _ in range(int(input())):
    a,b,q=map(int,input().split())
    arr=[]
    for i in range(q):
        arr+=[list(map(int,input().split()))]
        res=0
        if a!=b:
            for j in range(arr[i][0],arr[i][1]+1):
            
                if (j%a)%b!=(j%b)%a:
                    res+=1
        if i!=q-1:
            print(res,end=" ")
        if i==q-1:
            
            print(res)