#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<ll> vli; 
typedef vector< vli > vvli; 
/////////////////////////
#define F first
#define S second
#define PB push_back
#define MP make_pair
//////////////////////////
#define PI_val 3.14159265359
#define vasort(v) sort((v).begin(), (v).end())
#define vdsort(v) sort((v).begin(), (v).end(),greater<int>())
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
    // cin >> t;
    // while(t--)
    // {
        ll a,b,x,y,p,q,n,m,k,inc=0,cons=0,dec=0;
        string s,r;
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n-1; ++i)
        {
        	if(arr[i]<arr[i+1]){
        		inc=1;
        		if(cons||dec){
        			cout<<"NO"<<endl;
        			return 0;
        		}
        	}
        	if(arr[i]==arr[i+1]){
        		cons=1;
        		if(dec){
        			cout<<"NO"<<endl;
        			return 0;
        		}
        	}
        	if(arr[i]>arr[i+1]){
        		dec=1;
        		
        	}

        }
        cout<<"YES"<<endl;
//        sort(arr.begin(),arr.end());
    // }
    return 0;
}


