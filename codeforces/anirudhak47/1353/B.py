# cook your dish here

for t in range(int(input())):
    #n=int(input())
    n,k=map(int,input().split())
    arra=list(map(int,input().split()))
    arrb=list(map(int,input().split()))
    
    suma=0
    for i in range(len(arra)):
        suma+=arra[i]
    arra.sort()
    arrb.sort()
    for i in range(k):
        try:
            if arrb[n-1]>arra[0]:
                suma-=arra[0]
                suma+=arrb[n-1]
                arra=arra[1:]
                arrb=arrb[:n-1]
                n=n-1
            else:
                break
        except:
            break
    print(suma)