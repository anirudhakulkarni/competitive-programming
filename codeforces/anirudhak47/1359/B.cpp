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
#define loop(i,a,b) for (int i = a; i < b; i++)
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
long long mod=1000000007;
//////////////////////////
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
        cin>>n>>m>>x>>y;
        vector<string> arr(n);
        loop(i,0,n)
        {
            cin>>arr[i];
            for (int j = 0; j < m; ++j)
            {
                /* code */
                if(arr[i][j]=='.'){
                    ans++;
                }
            }
        }

        if(2*x<=y){
            cout<<x*ans<<endl;
        }
        else{
            for (int i = 0; i < n; ++i)
            {
                /* code */
                ll j=0;
                while(j<m-1){
                    if(arr[i][j]=='.'&&arr[i][j+1]=='.'){
                        res++;
                        j++;
                    }
                    j++;
                }
            }
            cout<<y*res+(ans-2*res)*x<<endl;
        }
//       printvector(arr);
//        sort(arr.begin(),arr.end());


    }
    return 0;
}