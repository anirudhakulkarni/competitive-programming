n=int(input())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
arr1+=arr1
arr2+=arr2
osum=0
tsum=0
for i in range(n):
    sum111=0
    sum222=0
    found=False
    for j in range(i,i+n):
        if arr2[j-i]==arr1[j]:
            sum111+=1
        if arr1[j-i]==arr2[j]:
            sum222+=1
        if sum111==n or sum222==n:
            found=True
            break
    if sum111>osum:
        osum=sum111
    if sum222>tsum:
        tsum=sum222
    break
print(max(osum,tsum))
