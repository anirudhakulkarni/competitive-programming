import math
r,x,y,a,b=map(int,input().split())
#arr=list(map(int,input().split()))
print(math.ceil((((x-a)**2+(y-b)**2)**0.5)/(2*r)))