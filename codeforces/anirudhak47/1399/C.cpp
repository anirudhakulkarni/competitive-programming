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
int mostFrequent(vector<ll> arrq, ll n) 
{ 
    // Sort the array 
   sort(arrq.begin(),arrq.end());
  
    // find the max frequency using linear traversal 
    int max_count = 1, res = arrq[0], curr_count = 1; 
    for (int i = 1; i < n; i++) { 
        if (arrq[i] == arrq[i - 1]) 
            curr_count++; 
        else { 
            if (curr_count > max_count) { 
                max_count = curr_count; 
                res = arrq[i - 1]; 
            } 
            curr_count = 1; 
        } 
    } 
  
    // If last element is most frequent 
    if (curr_count > max_count) 
    { 
        max_count = curr_count; 
        res = arrq[n - 1]; 
    } 
  
    return res; 
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
        ll a,b,x,y,p,q,n,k,sum=0,ans=0,res=0;
        string s,r;
        cin>>n;
        vector<ll> arr(n);
        loop(i,0,n)
        {
            cin>>arr[i];
        }
        vector<ll> ansarr;
        for (int i = 0; i < n; ++i)
        {
        	for (int ii =i+1; ii < n; ++ii)
        	{
        		/* code */ansarr.PB(arr[i]+arr[ii]);

        	}
        	/* code */
        }
        int max = 0;
int most_common = -1;
map<int,int> m;
for (auto vi = ansarr.begin(); vi != ansarr.end(); vi++) {
  m[*vi]++;
  if (m[*vi] > max) {
    max = m[*vi]; 
    most_common = *vi;
  }
}
        ll val=mostFrequent(ansarr,n);
     

        for (int i = 0; i < n; ++i)
        {
        	for (int ii =i+1; ii < n; ++ii)
        	{
        		/* code */if(arr[i]+arr[ii]==most_common){
        		ans++;
        		arr[i]=-6666;
        		arr[ii]=-8888;
        	}

        	}
        	/* code */
        }
        
        out1(ans);
//       printvector(arr);
//        sort(arr.begin(),arr.end());


    }
    return 0;
}