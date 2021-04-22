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
ll ala=0;
//////////////////////////
ll ans;
ll n;
ll arr[100000];
ll dp[6][100001][2]={-1};
ll solve(ll k,ll z,ll it,bool xx){

    if(k<=0){
        return 0;}
    if(dp[z][it][xx]!=-1){
        return dp[z][it][xx];
    }
    if(it==0){
        return dp[z][it][xx]=arr[1]+solve(k-1,z,it+1,0);
    }

    
    
    else{
        if(it==n-1){
            return dp[z][it][xx]=arr[n-1];
        }
        if(z>0){
            if(xx){
                return dp[z][it][xx]=solve(k-1,z,it+1,0)+arr[it+1];
            }
            return dp[z][it][xx]=max(solve(k-1,z,it+1,0)+arr[it+1],solve(k-1,z-1,it-1,1)+arr[it-1]);
        }
        else{
            return dp[z][it][xx]=solve(k-1,z,it+1,0)+arr[it+1];
        }


    }
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
        ll a,b,x,y,p,q,n,m,k,sum=0,z,res=0;
        string s,r;
        memset(dp,-1,sizeof(dp));
        cin>>n>>k>>z;
        ans=arr[0];
        loop(i,0,n)
        {
            cin>>arr[i];
        }
        cout<<solve(k,z,0,0)+arr[0]<<endl;
        
//       printvector(arr);
//        sort(arr.begin(),arr.end());


    }
    return 0;
}