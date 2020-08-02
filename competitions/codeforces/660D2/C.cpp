#include "bits/stdc++.h"
using namespace std;
using namespace std;
typedef long long ll;
typedef vector<ll> vli; 
typedef vector< vli > vvli; 
/////////////////////////
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define loop(i,a,b) for (ll i = a; i < b; i++)
//////////////////////////
#define printvector(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define printstack(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define PI_val 3.14159265359
#define vasort(v) sort((v).begin(), (v).end())
#define vdsort(v) sort((v).begin(), (v).end(),greater<int>())
#define printpair(n) cout<<n.F<<" "<<n.S
#define printvop(n) loop(i,0,n.size()-1){printpair(n[i])<<endl;}
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define ln endl
#define out1(x1) cout << x1 << ln
#define out2(x1,x2) cout << x1 << " " << x2 << ln
#define out3(x1,x2,x3) cout << x1 << " " << x2 << " " << x3 << ln
#define out4(x1,x2,x3,x4) cout << x1 << " " << x2 << " " << x3 << " " << x4 << ln
#define out5(x1,x2,x3,x4,x5) cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << ln
#define out6(x1,x2,x3,x4,x5,x6) cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << " " << x6 << ln
long long mod=1000000007;
//////////////////////
vector<vector<ll>> adj(100001,vector<ll>(0,0));
bool visited[100001]={false};
ll dis[100001];
queue<ll> q;
//////////////////////////
bool bfs(ll x){
    visited[x]=true;
    dis[x]=0;
    q.push(x);
    while(!q.empty()){
        ll s=q.front();q.pop();
        //
        ll sumo=0;
        for (auto u : adj[s]) {
            if (visited[u]) continue;
            sumo+=
             visited[u] = true;
             dis[u] = dis[s]+1;
            q.push(u);

    }
}


bool dfs(ll s){
    if(visited[s])return true;
    visited[s]=true;



}

int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif
    fio;
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,x,y,p,q,n,m,k,sum=0,ans=0,res=0;
        string s,r;
        cin>>n>>m;
        adj.clear();
        memset(visited,false,sizeof(visited));
        vector<ll> parr(n);
        loop(i,0,n)
        {
            cin>>parr[i];
        }
        vector<ll> harr(n);
        loop(i,0,n)
        {
            cin>>harr[i];
        }
        for (ll i = 0; i < n-1; ++i)
        {
            ll aa,bb;
            cin>>aa>>bb;
            adj[aa].PB(bb);
            adj[bb].PB(aa);
            /* code */
        }

//       printvector(arr);
//        sort(arr.begin(),arr.end());


    }
    return 0;
}

