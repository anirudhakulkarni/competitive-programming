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
    ll t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
                vector<ll> arr(n);
                loop(i,0,n)
                {
                    cin>>arr[i];
                }
        int first=0;
        int last=n-1;
        while(first<=last &&arr[first]!=1){
            first++;
        }
        while(last>=first && arr[last]!=1){
            last--;
        }
        int ans=0;
        for (int i = first; i < last; ++i)
        {
            /* code */if(arr[i]==0){
            ans++;
                }
        }

        //       printvector(arr);
        //        sort(arr.begin(),arr.end());
        
//       printvector(arr);
//        sort(arr.begin(),arr.end());
cout<<ans<<endl;
        

    }
    return 0;
}

