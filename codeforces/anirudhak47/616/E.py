n,m=map(int,input().split())
mod=10**9+7
sum=(n%mod)*(m%mod)
i=1
j=1
res=0
while j<=n:
    res+=(n//j)*j
    i+=1
    j=i
print((sum-res)%mod)