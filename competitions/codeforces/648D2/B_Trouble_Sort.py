from collections import deque as queue 
  
# Function that returns true if the array elements 
# can be sorted with the given operation 
def canBeSorted(N, a, P, vp): 
  
    # To create the adjacency list of the graph 
    v = [[] for i in range(N)] 
  
    # Boolean array to mark the visited nodes 
    vis = [False]*N 
  
    # Creating adjacency list for undirected graph 
    for i in range(P): 
        v[vp[i][0]].append(vp[i][1]) 
        v[vp[i][1]].append(vp[i][0]) 
  
    for i in range(N): 
  
        # If not already visited 
        # then apply BFS 
        if (not vis[i]): 
            q = queue() 
            v1 = [] 
            v2 = [] 
  
            # Set visited to true 
            vis[i] = True
  
            # Push the node to the queue 
            q.append(i) 
  
            # While queue is not empty 
            while (len(q) > 0): 
                u = q.popleft() 
                v1.append(u) 
                v2.append(a[u]) 
  
                # Check all the adjacent nodes 
                for s in v[u]: 
  
                    # If not visited 
                    if (not vis[s]): 
  
                        # Set visited to true 
                        vis[s] = True
                        q.append(s) 
  
            v1 = sorted(v1) 
            v2 = sorted(v2) 
  
            # If the connected component does not 
            # contain same elements then return false 
            if (v1 != v2): 
                return False
    return True
  
# Driver code 
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    arr2=list(map(int,input().split()))
    vp=[]
    for i in range(n):
        if arr2[i]==0:
            for j in range(i+1,n):
                if arr2[j]==1:
                    vp+=[[i,j]]
        if arr2[i]==1:
            for j in range(i+1,n):
                if arr2[j]==0:
                    vp+=[[i,j]]
                                
    p = len(vp) 
  
    if (canBeSorted(n, a, p, vp)): 
        print("Yes") 
    else: 
        print("No")