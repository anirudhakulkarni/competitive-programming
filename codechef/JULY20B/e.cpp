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
        ll a,b,p,q,n,m,k,sum=0,ans=0,res=0;
        string s,r;
        cin>>n;
        map<ll,ll> cntx;
        map <ll,ll> cnty;
        map <ll,ll> cntdiff;
        for(int i=0;i<n;i++)
        {
            ll t1;
            cin>>t1;
            cntx[t1]++;
            cntdiff[t1]++;
        }
        for(int i=0;i<n;i++)
        {
            ll t1;
            cin>>t1;
            cnty[t1]++;
            cntdiff[t1]--;
        }
        ll x,y;
        auto it=cntdiff.begin();
         auto it1=cnty.begin();
        while(it!=cntdiff.end())
        {
           if((abs(it->second))%2==1)
           {
               x=it->first;
               res=69;
               break;
           }
           else{
            ans+=(abs(it->second))/2;
           }

            it++;
        }
       
        if(res==69){
            cout<<-1<<endl;
        }
        else{
            if(ans%2){
                cout<<-1<<endl;
            }
            else{
            cout<<ans/2<<endl;}
        }
        
    }
    return 0;
}