#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
#define pll pair<ll, ll>
#define vpl vector<pll>
#define vb vector<bool>
#define PB push_back
#define MP make_pair
#define endl "\n"
#define forn(i,e) for(ll i=0; i<e; i++)
#define forsn(i,s,e) for(ll i=s; i<e; i++)
#define rforn(i,e) for(ll i=e; i>=0; i--)
#define rforsn(i,s,e) for(ll i=s; i>=e; i--)
#define vasort(v) sort(v.begin(), v.end())
#define vdsort(v) sort(v.begin(), v.end(),greater<ll>())
#define F first
#define S second
#define ln "\n"
#define out1(x1) cout << x1 << ln
#define out2(x1,x2) cout << x1 << " " << x2 << ln
#define out3(x1,x2,x3) cout << x1 << " " << x2 << " " << x3 << ln
#define out4(x1,x2,x3,x4) cout << x1 << " " << x2 << " " << x3 << " " << x4 << ln
#define out5(x1,x2,x3,x4,x5) cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << ln
#define out6(x1,x2,x3,x4,x5,x6) cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << " " << x6 << ln
 
#define in1(x1) cin >> x1
#define in2(x1,x2) cin >> x1 >> x2
#define in3(x1,x2,x3) cin >> x1 >> x2 >> x3
#define in4(x1,x2,x3,x4) cin >> x1 >> x2 >> x3 >> x4
#define in5(x1,x2,x3,x4,x5) cin >> x1 >> x2 >> x3 >> x4 >> x5
#define in6(x1,x2,x3,x4,x5,x6) cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6
 
#define mz(a)   memset(a,0,sizeof(a))
#define arrin(a,n) forn(i,n) cin >> a[i];
#define arrout(a,n) forn(i,n) {cout << a[i] << " ";} cout << ln;
#define TYPEMAX(type)   std::numeric_limits<type>::max()
#define TYPEMIN(type)   std::numeric_limits<type>::min()
 
#define zoom ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
int getindex(int ii,vector<vector<ll>> nthplayer,int n){
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < nthplayer[i].size(); ++j)
        {
            if(nthplayer[i][j]==ii){
                return i;
            }
        }
    }
    return -1;
}

int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("../testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("../testcases/output.in", "w", stdout);
    #endif
    zoom;
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,x,y,p,q,n,m,k,sum=0,ans=0,res=0;
        string s,r;
        cin>>n>>m;
        vector<vector<ll>> arr;
        vector<ll> sortedarr;
        for (ll i = 0; i < n; ++i)
        {
            vector<ll> temparr(m);
            for (ll j = 0; j < m; ++j)
            {
                cin>>temparr[j];
                sortedarr.push_back(temparr[j]);
            }
            arr.push_back(temparr);
        }
        vasort(sortedarr);
        ll player=0;
        int vis[100][100];
        for (int i = 0; i < 100; ++i)
        {
            for (int j = 0; j < 100; ++j)
            {
                vis[i][j]=0;
            }
        }
        for (ll k = 0; k < m; ++k)
        {
            int found=0;
            for (ll i = 0; i < n; ++i)
            {
                if(found){
                    break;
                }
                for (ll j = 0; j < m; ++j)
                {
                    if(sortedarr[k]==arr[i][j] && vis[i][j]==0){
                        ll tt=arr[i][k];
                        arr[i][k]=arr[i][j];
                        arr[i][j]=tt;
                        vis[i][k]=1;
                        // map[i][j]=player;
                        // nthplayer[i].push_back(player);
                        player++;
                        found=1;
                        break;
                    }
                }
            }
        }
        for (ll i = 0; i < n; ++i)
        {
            for (ll j = 0; j < m; ++j)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        //vasort(a);
    }
    return 0;
}
