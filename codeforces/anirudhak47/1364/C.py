
n=int(input())
#n,x=map(int,input().split())
arr=list(map(int,input().split()))
arr2=[]
if arr[0]==0:
    arr2+=[1]
if arr[0]==1:
    arr2+=[0]
    
for i in range(1,n):
    if arr[i-1]<arr[i]:
        arr2+=[arr[i-1]]
    else:
        x=arr[i]
        while x in arr2 or x in arr[i:]:
            x+=1
            
        arr2+=[x]

for i in range(len(arr2)):
    print(arr2[i],end=" ")
print()