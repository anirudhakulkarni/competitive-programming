import sys,bisect,string,math,time,functools,random,fractions
from heapq import heappush,heappop,heapify
from collections import deque,defaultdict,Counter
from itertools import permutations,combinations,groupby
def Golf():*a,=map(int,open(0))
def I():return int(input())
def S_():return input()
def IS():return input().split()
def LS():return [i for i in input().split()]
def LI():return [int(i) for i in input().split()]
def LI_():return [int(i)-1 for i in input().split()]
def NI(n):return [int(input()) for i in range(n)]
def NI_(n):return [int(input())-1 for i in range(n)]
def StoLI():return [ord(i)-97 for i in input()]
def ItoS(n):return chr(n+97)
def LtoS(ls):return ''.join([chr(i+97) for i in ls])
def GI(V,E,ls=None,Directed=False,index=1):
    org_inp=[];g=[[] for i in range(V)]
    FromStdin=True if ls==None else False
    for i in range(E):
        if FromStdin:
            inp=LI()
            org_inp.append(inp)
        else:
            inp=ls[i]
        if len(inp)==2:
            a,b=inp;c=1
        else:
            a,b,c=inp
        if index==1:a-=1;b-=1
        aa=(a,c);bb=(b,c);g[a].append(bb)
        if not Directed:g[b].append(aa)
    return g,org_inp
def GGI(h,w,search=None,replacement_of_found='.',mp_def={'#':1,'.':0},boundary=1):
#h,w,g,sg=GGI(h,w,search=['S','G'],replacement_of_found='.',mp_def={'#':1,'.':0},boundary=1) # sample usage
    mp=[boundary]*(w+2);found={}
    for i in range(h):
        s=input()
        for char in search:
            if char in s:
                found[char]=((i+1)*(w+2)+s.index(char)+1)
                mp_def[char]=mp_def[replacement_of_found]
        mp+=[boundary]+[mp_def[j] for j in s]+[boundary]
    mp+=[boundary]*(w+2)
    return h+2,w+2,mp,found
def TI(n):return GI(n,n-1)
def bit_combination(n,base=2):
    rt=[]
    for tb in range(base**n):s=[tb//(base**bt)%base for bt in range(n)];rt+=[s]
    return rt
def gcd(x,y):
    if y==0:return x
    if x%y==0:return y
    while x%y!=0:x,y=y,x%y
    return y
def show(*inp,end='\n'):
    if show_flg:print(*inp,end=end)
 
YN=['YES','NO'];Yn=['Yes','No']
mo=10**9+7
inf=float('inf')
FourNb=[(1,0),(-1,0),(0,1),(0,-1)];EightNb=[(1,0),(-1,0),(0,1),(0,-1),(1,1),(-1,-1),(1,-1),(-1,1)];compas=dict(zip('EWNS',FourNb))
l_alp=string.ascii_lowercase
#sys.setrecursionlimit(10**7)
input=lambda: sys.stdin.readline().rstrip()
 
class Tree:
    def __init__(self,inp_size=None,ls=None,init=True,index=0):
        self.LCA_init_stat=False
        self.ETtable=[]
        if init:
            if ls==None:
                self.stdin(inp_size,index=index)
            else:
                self.size=len(ls)+1
                self.edges,_=GI(self.size,self.size-1,ls,index=index)
        return
 
    def stdin(self,inp_size=None,index=1):
        if inp_size==None:
            self.size=int(input())
        else:
            self.size=inp_size
        self.edges,_=GI(self.size,self.size-1,index=index)
        return
    
    def listin(self,ls,index=0):
        self.size=len(ls)+1
        self.edges,_=GI(self.size,self.size-1,ls,index=index)
        return
 
    def __str__(self):
        return  str(self.edges)
 
    def dfs(self,x,func=lambda prv,nx,dist:prv+dist,root_v=0):
        q=deque()
        q.append(x)
        v=[-1]*self.size
        v[x]=root_v
        while q:
            c=q.pop()
            for nb,d in self.edges[c]:
                if v[nb]==-1:
                    q.append(nb)
                    v[nb]=func(v[c],nb,d)
        return v
 
    def EulerTour(self,x):
        q=deque()
        q.append(x)
        self.depth=[None]*self.size
        self.depth[x]=0
        self.ETtable=[]
        self.ETdepth=[]
        self.ETin=[-1]*self.size
        self.ETout=[-1]*self.size
        cnt=0
        while q:
            c=q.pop()
            if c<0:
                ce=~c
            else:
                ce=c
                for nb,d in self.edges[ce]:
                    if self.depth[nb]==None:
                        q.append(~ce)
                        q.append(nb)
                        self.depth[nb]=self.depth[ce]+1
            self.ETtable.append(ce)
            self.ETdepth.append(self.depth[ce])
            if self.ETin[ce]==-1:
                self.ETin[ce]=cnt
            else:
                self.ETout[ce]=cnt
            cnt+=1
        return
    
    def LCA_init(self,root):
        self.EulerTour(root)
        self.st=SparseTable(self.ETdepth,init_func=min,init_idl=inf)
        self.LCA_init_stat=True
        return
    
    def LCA(self,root,x,y):
        if self.LCA_init_stat==False:
            self.LCA_init(root)
        xin,xout=self.ETin[x],self.ETout[x]
        yin,yout=self.ETin[y],self.ETout[y]
        a=min(xin,yin)
        b=max(xout,yout,xin,yin)
        id_of_min_dep_in_et=self.st.query_id(a,b+1)
        return self.ETtable[id_of_min_dep_in_et]
 
class SparseTable: # O(N log N) for init, O(1) for query(l,r)
    def __init__(self,ls,init_func=min,init_idl=float('inf')):
        self.func=init_func
        self.idl=init_idl
        self.size=len(ls)
        self.N0=self.size.bit_length()
        self.table=[ls[:]]
        self.index=[list(range(self.size))]
        self.lg=[0]*(self.size+1)
        
        for i in range(2,self.size+1):
            self.lg[i]=self.lg[i>>1]+1
 
        for i in range(self.N0):
            tmp=[self.func(self.table[i][j],self.table[i][min(j+(1<<i),self.size-1)]) for j in range(self.size)]
            tmp_id=[self.index[i][j] if self.table[i][j]==self.func(self.table[i][j],self.table[i][min(j+(1<<i),self.size-1)]) else self.index[i][min(j+(1<<i),self.size-1)] for j in range(self.size)]
            self.table+=[tmp]
            self.index+=[tmp_id]
    
    # return func of [l,r)
    def query(self,l,r):
        if r>self.size:r=self.size
        #N=(r-l).bit_length()-1
        N=self.lg[r-l]
        return self.func(self.table[N][l],self.table[N][max(0,r-(1<<N))])
    
    # return index of which val[i] = func of v among [l,r)
    def query_id(self,l,r):
        if r>self.size:r=self.size
        #N=(r-l).bit_length()-1
        N=self.lg[r-l]
        a,b=self.index[N][l],self.index[N][max(0,r-(1<<N))]
        if self.table[0][a]==self.func(self.table[N][l],self.table[N][max(0,r-(1<<N))]):
            b=a
        return b
    
    def __str__(self):
        return str(self.table[0])
 
    def print(self):
        for i in self.table:
            print(*i)
 
class Comb:
    def __init__(self,n,mo=10**9+7):
        self.fac=[0]*(n+1)
        self.inv=[1]*(n+1)
        self.fac[0]=1
        self.fact(n)
        for i in range(1,n+1):
            self.fac[i]=i*self.fac[i-1]%mo
            self.inv[n]*=i
            self.inv[n]%=mo
        self.inv[n]=pow(self.inv[n],mo-2,mo)
        for i in range(1,n):
            self.inv[n-i]=self.inv[n-i+1]*(n-i+1)%mo
        return
    
    def fact(self,n):
        return self.fac[n]
        
    def invf(self,n):
        return self.inv[n]
 
    def comb(self,x,y):
        if y<0 or y>x:
            return 0
        return self.fac[x]*self.inv[x-y]*self.inv[y]%mo
 
show_flg=False
show_flg=True
ans=0

def fast_consecutize(a):
    if sum(a)==0:
        return 0
    n=len(a)
    dp0=[0]*(n+1)
    dp1=[0]*(n+1)
    dp2=[0]*(n+1)
    rt=n
    for i in range(n):
        dp0[i+1]=dp0[i]+a[i]
        dp1[i+1]=min(dp1[i]+1-a[i],dp0[i]+1-a[i])
        dp2[i+1]=min(dp2[i]+a[i],dp1[i]+1-a[i],dp0[i])
        
    return dp2[n]

def consecutize(a):
    if sum(a)==0:
        return 0
    n=len(a)
    rt=n
    aon=[0]
    aoff=[0]
    for i in a:
        aon+=[aon[-1]+i]
        aoff+=[aoff[-1]+1-i]
    for l in range(n):
        for r in range(l,n):
            tmp=0
            tmp+=aon[l]-aon[0]
            tmp+=aoff[r+1]-aoff[l]
            tmp+=aon[n]-aon[r+1]
            rt=min(rt,tmp)
    return rt

xx='01'
A=[int(i) for i in xx]
#show(consecutize(A))
#show(fast_consecutize(A))


T=I()
for _ in range(T):
    n,k=LI()
    a=[int(i) for i in input()]
    ans=a
    c=0
    r=[[]for i in range(k)]
    cnt=[0]*k
    for i in range(n):
        cnt[c]+=a[i]
        r[c]+=[a[i]]
        c+=1 if c!=k-1 else -k+1

    #show('r',r,'cnt',cnt)
    
    ans=n
    s=sum(cnt)
    for i in range(k):
        tmp=s-cnt[i]+fast_consecutize(r[i])
        if ans>tmp:
            ans=tmp
    print(ans)