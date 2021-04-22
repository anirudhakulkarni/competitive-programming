# def getIndex(arrsorted,mean):
    # f = arrsorted.index(list(filter(lambda i: i >= mean, arrsorted))[0])
    # return f,f-1
# cook your dish here
# for t in range(int(input())):
n=int(input())
#m,k=map(int,input().split())
arr=list(map(int,input().split()))
arrsorted=sorted(arr)
mean=0
for i in arr:
    mean+=i
mean/=n
# print(mean)
# for i in arr:
#     print(abs(mean-i))
ans=0
# i,j=getIndex(arrsorted,mean)
i,j=n//2-1,n//2
temparr=[]
while(i>=0 or j<n):
    if(i<0):
        temparr+=[arrsorted[j]]
        j+=1
    else:
        if(j>=n):
            temparr+=[arrsorted[i]]
            i-=1
        else:
            if(abs(arrsorted[i]-mean)>abs(arrsorted[j]-mean)):
                temparr+=[arrsorted[j]]
                j+=1
            else:
                temparr+=[arrsorted[i]]
                i-=1
# temparr=[889921234, 943872923, 1000000000,6589, 104, 69]
myset=set()
for i in temparr:
    myset.add(i)
if(len(myset)==len(temparr)):
    temparr.sort()
minsofar=temparr[0];
maxsofar=temparr[0];
# print(temparr)
for i in temparr:
    if(minsofar>i):
        minsofar=i
    if(maxsofar<i):
        maxsofar=i
    ans+=maxsofar-minsofar
print(ans)