for _ in range(int(input())):
    n=int(input())
 
    ans=[]
    if n%4!=0:
        print("NO")
    elif n==4:
        print("YES")
        print("2 4 1 5")
        
    else:
        for i in range(n//2):
            ans+=[2*i+2]
        for i in range(n//2-1):
            ans+=[2*i+1]
        ans+=[3*(n//2)-1]
        print("YES")
        for l in ans:
            print(l,end=" ")