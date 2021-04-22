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
        cin>>n;
        vector<ll> arr(n);
        ll max=0,min=0,maxi=0,mini=0;
        loop(i,0,n)
        {
            cin>>arr[i];
            sum+=arr[i];
            if(i==0){
            	max=arr[i];
            	min=arr[i];
            }
            if(arr[i]>max){
            	max=arr[i];
            	maxi=i;
            }
            if(arr[i]<min){
            	min=arr[i];
            	mini=i;
            }
        }
        // if(n==2){
        // 	cout<<1<<endl;continue;
        // }
        ll maxsofar=0;
        for (int i = 0; i < n; ++i)
        {	
        	ll ma;
        	if(i==0){
        		ma=abs(arr[0]-arr[1]);
        	}
        	else if(i==n-1){
        		ma=abs(arr[i]-arr[i-1]);
        	}
        	else{
        	    ma=abs(arr[i]-arr[i+1])+abs(arr[i]-arr[i-1])-abs(arr[i-1]-arr[i+1]);
        	}
        	if(ma>maxsofar){
	        	maxsofar=ma;
        	}
        }
        for (int i = 1; i < n; ++i)
        {
        	/* code */ans+=abs(arr[i-1]-arr[i]);
        }
        out1(ans-maxsofar);
        continue;
        ll avgx=round((sum-max)/(n-1));
        ll avgn=round((sum-min)/(n-1));
        vector<ll> arrdiffx(n);
        vector<ll> arrdiffn(n);
        for (int i = 0; i < n; ++i)
        {
        	arrdiffn[i]=avgn-arr[i];
        	arrdiffx[i]=avgx-arr[i];
        	if(i==maxi){
        		if(i==0){
        			arrdiffx[i]=0;	
        		}
        		else{
        			arrdiffx[i]=arrdiffx[i-1];
        		}
        	}
        	if(i==mini){
        		if(i==0){
        			arrdiffn[i]=0;	
        		}
        		else{
        			arrdiffn[i]=arrdiffn[i-1];
        		}
        	}
        }
        vector<ll> arransx(n);
        vector<ll> arransn(n);
        ll ansx=abs(arrdiffx[0]);
        ll ansn=abs(arrdiffn[0]);

        // for (int i = 1; i < n; ++i)
        // {
        // 	arransx[i]=abs(arrdiffx[i-1]-arrdiffx[i]);
        // 	arransn[i]=abs(arrdiffn[i-1]-arrdiffn[i]);
        // }

        for (int i = 1; i < n; ++i)
        {
        	ansx+=abs(arrdiffx[i-1]-arrdiffx[i]);
        	ansn+=abs(arrdiffn[i-1]-arrdiffn[i]);
        }
       // if(ansx>ansn){cout<<ansn<<endl;}
       // else{
       // 	cout<<ansx<<endl;
       // }
        out4(avgx,avgn,ansx,ansn);
//       printvector(arr);
//        sort(arr.begin(),arr.end());


    }
    return 0;
}

