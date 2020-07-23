#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define loop(i,a,b) for (ll i = a; i < b; i++)
#define printvop(n) loop(i,0,n.size()-1){printpair(n[i])<<endl;}
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define out3(x1,x2,x3) cout << x1 << " " << x2 << " " << x3 <<endl
ll mod=1000000007;
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
    cin>>t;
    while(t--)
    {
        ll b,x,y,p,q,n,l,r,m,k,sum=0,ans=0,res=0; 
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
 
        if(count(a,a+n,1)==n)
        {
            if(n%2==0)
            {
                cout<<"Second"<<endl;
            }
            else
            {
                cout<<"First"<<endl;
            }
        }
        else
        {
            ll cnt=0;
            for(ll i=0;i<n;i++)
            {
                if(a[i]!=1)
                {
                    break;
                }
                cnt++;
            }
            if(cnt%2!=0)
            {
                cout<<"Second"<<endl;
            }
            else
            {
                cout<<"First"<<endl;
            }
        }
    }
    return 0;
}