# cook your dish here
for t in range(int(input())):
    #n=input()
    n,k=map(int,input().split())
    if n!=2:
        temp=k
        sum=k
        flag=False
        while temp>=n:
            sum+=temp//n

            temp=temp%n+temp//n
        if k==1:
            print(1)

        else:
            print(sum)
    else:
        print(2*k-1)