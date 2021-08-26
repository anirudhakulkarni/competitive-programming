# cook your dish here
import math
# cook your dish here
for t in range(int(input())):
    a=int(input())
    arr=list(map(int,input().split()))
    finarr=list(set(arr))
    finarr.sort()
    found=0
    for i in range(1,1024):
        arr2=[]
        for j in range(a):
            arr2+=[arr[j]^i]
        xxx=list(set(arr2))
        xxx.sort()
        if xxx==finarr:
            print(i)
            found=1
            break
    if found==0:
        print(-1)