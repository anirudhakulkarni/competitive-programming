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
        ll a,b,x,y,p,q,n,m,k,sum=0,ans=1,resa=0;
        string s,r;
        cin>>n>>k;
        vector<ll> arr2(n);
        vector<ll> arr;
        loop(i,0,n)
        {
            cin>>arr2[i];
            if(arr2[i]%k!=0){
            arr.PB(k-arr2[i]%k);}

        }
n=arr.size();
//       printvector(arr);
        sort(arr.begin(),arr.end());
 if(n){int max_count = 1, res = arr[0], curr_count = 1; 
     for (int i = 1; i < n; i++) { 
         if (arr[i] == arr[i - 1]) 
             curr_count++; 
         else { 
             if (curr_count >= max_count) { 
                 max_count = curr_count; 
                 res = i ; 
             } 
             curr_count = 1; 
         } 
     } 
   
     // If last element is most frequent 
     if (curr_count >= max_count) 
     { 
         max_count = curr_count; 
         res = n-1; 
     } 
     ll ansu=0;
     for (int i = 0; i < n; ++i)
     {
         /* code */if(arr[i]==arr[res]){
         ansu++;
     }
     }
     cout<<1+(ansu-1)*k+arr[res]<<endl;
 }
 else{
    cout<<0<<endl;
 }

    }
    return 0;
}