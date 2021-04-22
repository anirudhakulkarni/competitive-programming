for _ in range(int(input())):
	a,b,c,d=map(int,input().split())
	if a<=b:
		res=b
	else:
		res=b
		if c>d:
			a=a-b
			if a%(c-d)!=0:
				res+=(a//(c-d)+1)*c
			else:
				res+=(a//(c-d))*c
			
		else:
			res=-1
	print(res)