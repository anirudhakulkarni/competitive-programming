n,q=map(int,input().split())
arr=list(map(int,input().split()))
qarr=list(map(int,input().split()))
for i in range(q):
	if qarr[i]<0:
		arr.sort()
		arr.pop(abs(qarr[i])-1)
	else:
		arr.append(qarr[i])
if len(arr)>0:
	print(arr[0])
else:
	print(0)