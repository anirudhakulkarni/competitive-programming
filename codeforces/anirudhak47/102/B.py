def solve(n,i):
    xx=str(n)
    if len(xx)==1:
        return n,i
    ans=0
    for j in range(len(xx)):
        ans+=int(xx[j])
    return solve(ans,i+1)
n=int(input())
(t,tt)=solve(n,0)
print(tt)