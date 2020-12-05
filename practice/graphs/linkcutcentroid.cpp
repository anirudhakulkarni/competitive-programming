#include "bits/stdc++.h"
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
#define printvector(n) for(ll i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define printstack(n) for(long long i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define PI_val 3.14159265359
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
ll mod=1000000007;
#define vasort(v) sort((v).begin(), (v).end())
#define vdsort(v) sort((v).begin(), (v).end(),greater<ll>())
vector<ll> adj[100005];
int visited[100005]={0};
int visited2[100005]={0};
//////////////////////////

void dfs(int v){
	stack<ll> s;
	s.push(v);
	while(!s.empty()){
		int newv=s.top();
		s.pop();
		if(visited[newv]==0){
			cout<<newv<<" ";//PROCESS HERE
		}
		visited[newv]=1;
		for (ll y:adj[newv])
		{
			if(!visited[y]){
				s.push(y);
			}
		}
	}
	cout<<endl;

}

void bfs(int v){
	queue<ll> s;
	s.push(v);
	while(!s.empty()){
		int newv=s.front();
		s.pop();
		if(visited2[newv]==0){
			cout<<newv<<" "; //PROCESS HERE
		}
		visited2[newv]=1;
		for (ll y:adj[newv])
		{
			if(!visited2[y]){
				s.push(y);
			}
		}
	}
	cout<<endl;
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
    ll a,b,x,y,p,q,n,m,k,sum=0,ans=0,res=0;
    string s,r;
    cin >> n;
	loop(i,0,n-1)
    {
        cin>>a>>b;
        adj[a].PB(b);
        adj[b].PB(a);
    }
    for (int i = 1; i <= n; ++i)
    {
    	for (int ii = 0; ii < adj[i].size(); ++ii)
    	{
    		/* code */cout<<adj[i][ii]<<" ";
    	}
    	/* code */
    	cout<<endl;
    }
    dfs(1);
    bfs(1);
    //       printvector(arr);
    //        sort(arr.begin(),arr.end());
    
    
    return 0;
}

