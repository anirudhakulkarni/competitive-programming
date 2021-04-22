# cook your dish here
for t in range(int(input())):
    n=input()
    sum=0
    #m,k=map(int,input().split())
    #arr=list(map(int,input().split()))
    found=0
    for i in range(len(n)-1):
        if found==1:
            found=0
            continue
        else:
            if n[i]!=n[i+1]:
                sum+=1
                found=1
            else:
                found=0
    print(sum)