# cook your dish here
for t in range(int(input())):
    n=input()
    #m,k=map(int,input().split())
    #arr=list(map(int,input().split()))
    arr=[]
    sum=0
    for i in range(len(n)):
        x=int(n[i])*10**(len(n)-i-1)
        if x!=0:
            arr+=[x]
            sum+=1
    print(sum)
    for i in range(len(arr)):
        print(arr[i],end=" ")
    print()