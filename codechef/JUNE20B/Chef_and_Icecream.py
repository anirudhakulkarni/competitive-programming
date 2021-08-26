def possible(z):
    global fcoin
    global tcoin
    global pcoin
    if z==5:
        return True
    if z==10 and fcoin>0:
        fcoin-=1
        return True
    if z==15:
        if tcoin>0:
            tcoin-=1
            return True
        elif fcoin>1:
            fcoin-=2
            return True
    return False
# cook your dish here
for t in range(int(input())):
    n=int(input())
    sum=0
    found=False
    #m,k=map(int,input().split())
    arr=list(map(int,input().split()))
    res=0
    fcoin=0
    tcoin=0
    pcoin=0
    for i in range(n):
        if arr[i]==5:
            fcoin+=1
        if arr[i]==10:
            tcoin+=1
        if arr[i]==15:
            pcoin+=1
        if not possible(arr[i]):
            found=True
            break
    if found:
        print("NO")
    else:
        print("YES")