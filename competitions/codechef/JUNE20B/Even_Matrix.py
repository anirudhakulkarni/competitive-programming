# cook your dish here
for t in range(int(input())):
    n=int(input())
    res=0
    for i in range(1,n+1):
        if i%2==1:
            for j in range(1,n+1):
                print(res+j,end=" ")
            print()
        else:
            for j in range(n,0,-1):
                print(res+j,end=" ")
            print()
        res+=n