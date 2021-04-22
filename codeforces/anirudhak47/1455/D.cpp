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
bool issorted(vector<ll> arr){
    for (int i = 0; i < arr.size()-1; ++i)
    {
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
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
        ll a=0,b,x,y,p,q,n,m,k,sum=0,ans=0,res=0,maxsofar=0;
        string s,r;
        cin>>n>>x;
                vector<ll> arr(n);
                loop(i,0,n)
                {
                    cin>>arr[i];
                }
                int ii=0,ji=n-1;
                // while(ii<n){
                //     if(arr[ii]>x){
                //         break;
                //     }
                //     ii++;
                // }
                
                for (int i = 0; i < n-1; ++i)
                {
                    /* code */
                    if(issorted(arr)){
                        break;
                    }
                    if(arr[i]>x){
                        ll temp =arr[i];
                        arr[i]=x;
                        x=temp;
                        sum++;
                    }
                }
                for (int i = 0; i < n-1; ++i)
                {
                    /* code */
                    if(arr[i]>arr[i+1]){
                        sum=-1;
                        break;
                    }
                }
                
                    cout<<sum<<endl;
        //       printvector(arr);
//                sort(arr.begin(),arr.end());
        

    }
    return 0;
}