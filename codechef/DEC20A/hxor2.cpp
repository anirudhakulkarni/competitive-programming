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
ll log2new(ll a){
	if(a>0){
		return log2(a);
	}
	return 0;
}
std::string toBinary(ll n)
{
    std::string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}
// ll f(vector<ll> arr,ll i, ll x){
// 	ll nn=arr[i];
// 	if(log2(nn)<x){
// 		while(nn>0){
// 			ll tt=pow(2,log2new(nn));
// 			nn=nn^tt;
// 			x--;
// 		}
// 		if(x)
// 	}
// 	else{

// 	}
// }
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
        cin>>n>>x;
        vector<ll> arr(n);
        loop(i,0,n)
        {
            cin>>arr[i];
        }
        ll curr=0;
		while(x>0&&curr<n-1){
			       //printvector(arr);
			       //out4(x,curr,n-2,arr[curr]);
			
			if(curr==n-2 && arr[curr]==0 ){
				if(x%2==0){
					arr[curr]=0;

				}
				else{
					arr[curr]=1;
					arr[curr+1]=arr[curr+1]^1;

				}
				x=0;
				break;
			}
			ll q=log2new(arr[curr]);
			ll qq=pow(2,q);
			ll curr2=curr+1;
			ll xored=arr[curr2]^qq;
			while(curr2<n-1&&xored>arr[curr2]){
				//out2("this",curr2);
				curr2++;
				xored=arr[curr2]^qq;

			}
			arr[curr2]^=qq;
			arr[curr]^=qq;
			x--;
			
			if(arr[curr]==0)curr++;
			       // printvector(arr);
		}        

       printvector(arr);
//        sort(arr.begin(),arr.end());


    }
    return 0;
}

