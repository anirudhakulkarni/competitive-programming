# cook your dish here
# for t in range(int(input())):
# n=int(input())
n,k=map(int,input().split())
# arr=list(map(int,input().split()))
# arrq=list(map(int,input().split()))
# for i in arrq:
#     # print(arr)
#     ind=arr.index(i)
#     print(ind+1,end=" ")
#     temp=arr[ind]
#     for j in range(ind,0,-1):
#         arr[j]=arr[j-1]
#     arr[0]=temp
for j in range(n):
    # for i in range(k):
    print(chr(ord('a')+j%k),end="")