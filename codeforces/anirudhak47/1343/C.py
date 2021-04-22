def largest(arr): 
    if len(arr)>0:
        maxx = arr[0] 
        for i in range(1, len(arr)): 
            if arr[i] > maxx: 
                maxx = arr[i] 
        return mxxx
    else:
        return 0
def lowest(arr): 
    if len(arr)>0:
        minn = arr[0] 
        for i in range(1, len(arr)): 
            if arr[i] < minn: 
                minn = arr[i] 
        return minn
    else:
        return 0
for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    sum= 0

    item= 1
    blank=[]
    for i in range(n):
        if i==0:
            sum+=arr[i]
            cursor=-1
            if arr[i]<0:
                arr=1
        elif cursor==1:
            while (arr[item])>0:
                blank+=[arr[item]]
                if arr[item+1]>0:
                    item+=1
                elif arr[item+1]<0:
                    break
            sum+=largest(blank)
            blank=[]
        else:
            while (arr[item])<0:
                blank+=[arr[item]]
                if arr[item]<0:
                    item+=1
                elif arr[item]>0 :
                    break
            sum+=lowest(blank)
            blank=[]
    print(sum)