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
        ll a,b,x,y,p,q,n,m,k,sum=0,ans=0,res=0;
        string s,r;
        cin>>n>>k;
        ll arr[n];
        for (int i = 0; i < n; ++i)
        {
        	if(i%2==0){
        		arr[i]=i+1;
        	}
        	else{
        		arr[i]=-i-1;
        	}
        }
  		if(k<n/2){
  			for (int i = 2*k; i < n; i+=2)
  			{
  				/* code */
  				arr[i]=-i-1;
  			}
  		}
  		else if(n%2==1 &&2*k+1==n){
  			arr[n-1]=-n;
  		}
  		else{
  			if(n%2==0){
  			
  			for (int i = 1; i <=k-n/2; i++)
  			{
  				/* code */arr[n-2*i+1]=n-2*i+2;
  			}
  			}
  			if(n%2==1){
  			
  			for (int i = 1; i <=k-(n+1)/2; i++)
  			{
  				/* code */arr[n-2*i]=n-2*i+1;
  			}
  			}
  			
  		}

  		for (int i = 0; i < n; ++i)
  		{
  			/* code */cout<<arr[i]<<" ";
  		}
//       printvector(arr);
//        sort(arr.begin(),arr.end());

  		cout<<endl;
    }
    return 0;
}

