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
    
    fio;
    ll a,b,x,y,p,q,n,l,r,m,k,sum=0,ans=0,res=0;
    
    cin >> n;
    while(n--){
        cin>>l>>r>>m;
        if(m>=r){
            if(r-m%r<l){
                
            }
        out3(r,r,r-(m%r));
}
        else if(m>=l){
            out3(m,l,l);
        }
        else{
            out3(l,m-l+r,r);
        }
    }
    return 0;
}
