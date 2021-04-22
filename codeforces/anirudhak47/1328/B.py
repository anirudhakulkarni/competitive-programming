def classfinder(k):
    res=1
    while res*(res+1)//2<k:

        res+=1
        
    return res

    
# cook your dish here
for t in range(int(input())):
    #n=int(input())
    n,k=map(int,input().split())
    clas=classfinder(k)
    i=k-clas*(clas-1)//2
    str=""
    for z in range(n):
        if z==n-clas-1 or z==n-i:
            str+="b"
        else:
            str+="a"
    print(str)