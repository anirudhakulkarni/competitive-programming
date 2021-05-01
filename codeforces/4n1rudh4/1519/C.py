def compare(x,y):
    x.sort();
    y.sort();
    return len(x)<len(y)
# cook your dish here
for t in range(int(input())):
    n=int(input())
    #m,k=map(int,input().split())
    arr=list(map(int,input().split()))
    skills=list(map(int,input().split()))
    ansarr=[]
    for i in range(n+1):
        ansarr+=[[]]
    for i in range(n):
        ansarr[arr[i]]+=[skills[i]]
    # print(ansarr)
    ansarr=[ansarr[i] for i in range(n+1) if len(ansarr[i])>0]
    # for i in ansarr:
    #     print(i)
    # ansarr.sort(key=lambda i:len(i))
    for i in ansarr:
        i.sort()
    # print(ansarr)
    ans=sum(skills)
    for i in range(1,n+1):
        toprint=ans;
        for j in ansarr:
            if(len(j)<i):
                temp=len(j)
            else:
                temp=len(j)%i;
            for k in range(0,temp):
                toprint-=j[k]
        print(toprint,end=" ")
    print()