# cook your dish here
def arraret(input):
    indices = list(range(len(input)))
    indices.sort(key=lambda x: input[x])
    output = [0] * len(indices)
    for i, x in enumerate(indices):
        output[x] = i    

    return output
    
for t in range(int(input())):
    #n=int(input())
    #n,k=map(int,input().split())
    s=input()
    sarr=[]
    for i in range(len(s)):
        sarr+=[s[i]]
    sarr.sort()
    n=int(input())
    arr=list(map(int,input().split()))
    for i in range(n):
        arr[i]=-1*arr[i]
    arr3=[]
    for i in range(n):
        arr3+=[arr[i]]
    arr3.sort()
    for i in range(len(arr)):
        if arr.count(arr[i])>1:
            arr[i]+=0.01

    arrrrrr=arraret(arr)
    tt=""
    for i in range(len(arrrrrr)):
        tt+=str(sarr[arrrrrr[i]])
    print(tt)