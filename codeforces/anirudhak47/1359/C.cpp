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
        long double h,c,a,b,x,y,p,q,n,m,k,sum=0,ans=0,res=0;
        string s,r;
        cin>>h>>c>>k;
        h-=c;
        
        k-=c;
        c=0;
        if(h<=k){
            cout<<1<<endl;
        }      
        else if(h>=k*2){
            cout<<2<<endl;
        }  

        else {
            long double xx,yy;
            
            yy=floor((k-h)/(c+h-2*k));
            xx=yy+1;
            long double tatti=((xx+1)*h+c*xx)/(2*xx+1),tatti2=((yy+1)*h+
                c*yy)/(2*yy+1);
            if(abs(k-tatti)>=abs(k-tatti2)){
                cout<<2*yy+1<<endl;
            }
            else{
                cout<<2*xx+1<<endl;
            }
        }
//       printvector(arr);
//        sort(arr.begin(),arr.end());


    }
    return 0;
}