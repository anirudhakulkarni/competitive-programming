
//  _  _           _                   _  _      _  _
// | || |   _ __  / | _ __  _   _   __| || |__  | || |
// | || |_ | '_ \ | || '__|| | | | / _` || '_ \ | || |_
// |__   _|| | | || || |   | |_| || (_| || | | ||__   _|
//    |_|  |_| |_||_||_|    \__,_| \__,_||_| |_|   |_|

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
#define pll pair<ll, ll>
#define vpl vector<pll>
#define vb vector<bool>
#define PB push_back
#define MP make_pair
#define endl "\n"
#define forn(i,e) for(ll i=0; i<e; i++)
#define forsn(i,s,e) for(ll i=s; i<e; i++)
#define rforn(i,e) for(ll i=e; i>=0; i--)
#define rforsn(i,s,e) for(ll i=s; i>=e; i--)
#define vasort(v) sort(v.begin(), v.end())
#define vdsort(v) sort(v.begin(), v.end(),greater<ll>())
#define F first
#define S second
#define out1(x1) cout << x1 << endl
#define out2(x1,x2) cout << x1 << " " << x2 << endl
#define out3(x1,x2,x3) cout << x1 << " " << x2 << " " << x3 << endl
#define out4(x1,x2,x3,x4) cout << x1 << " " << x2 << " " << x3 << " " << x4 << endl
#define out5(x1,x2,x3,x4,x5) cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << endl
#define out6(x1,x2,x3,x4,x5,x6) cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << " " << x6 << endl
 
#define in1(x1) cin >> x1
#define in2(x1,x2) cin >> x1 >> x2
#define in3(x1,x2,x3) cin >> x1 >> x2 >> x3
#define in4(x1,x2,x3,x4) cin >> x1 >> x2 >> x3 >> x4
#define in5(x1,x2,x3,x4,x5) cin >> x1 >> x2 >> x3 >> x4 >> x5
#define in6(x1,x2,x3,x4,x5,x6) cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6
 
#define mz(a)   memset(a,0,sizeof(a))
#define arrin(a,n) forn(i,n) cin >> a[i];
#define arrout(a,n) forn(i,n) {cout << a[i] << " ";} cout << endl;
#define arr2out(a,n,m) forn(i,n){forn(j,m){cout << a[i][j] << " ";}cout << endl;}
#define TYPEMAX(type)   std::numeric_limits<type>::max()
#define TYPEMIN(type)   std::numeric_limits<type>::min()
 
#define zoom ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
 
int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("../testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("../testcases/output.in", "w", stdout);
    #endif
    zoom;
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,x,y,p,q,n,m=0,k,sum=0,ans=0,res=0;
        string s,r;
        cin>>n;
      //   cin>>s;
      //   vector<int> arr(n);
        int arr[n];
      //   vecort<pair<int,int>> arrback;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            // arrback.PB(MP(arr[i],i));
        }
      //   vector<vector<int>> arr2(n,vector<int>(n+1));
        int arr2[n][n+1];
        memset(arr2,0,sizeof(arr2));
         for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
               arr2[i][arr[j]]++;
            }
         }
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               if(j==0){
                  continue;
               }
               else{
                  arr2[i][j]+=arr2[i][j-1];
               }
            }
         }

         // vector<vector<int>> arr3(n,vector<int>(n+1));
         int arr3[n][n+1];
         memset(arr3,0,sizeof(arr3));
         for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>i;j--){
               arr3[i][arr[j]]++;
            }
         }
         
         for(int i=0;i<n;i++){
            for(int j=0;j<n+1;j++){
               if(j==0){
                  continue;
               }
               else{
                  arr3[i][j]+=arr3[i][j-1];
               }
            }
            // for(int j=n;j>=0;j--){
            //    if(j==n){
            //       continue;
            //    }
            //    else{
            //       arr3[i][j]+=arr3[i][j+1];
            //    }
            // }
         }
         // for(int i=0;i<n;i++){
         //    for(int j=0;j<n+1;j++){
         //       cout<<arr3[i][j]<<" ";
         //    }
         //    cout<<endl;
         // }
         // cout<<endl;
      //   cout<<"input"<<endl;
         for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){

               // cout<<"i: "<<i<<" j: "<<j<< " arr2[i][arr[j]+1]: "<<arr2[i][arr[j]-1]<<" arr3[i][arr[j]+1]: "<<arr3[i][arr[j]]<<endl;
               ans+=arr2[i][arr[j]-1]*arr3[j][arr[i]];
            }
         }
               // do binary search to find 
         
         
         // for(int i=0;i<n;i++){
         //    for(int j=i+1;j<n;j++){
         //       // cout<<mp1[MP(i,j)]<<" "<<mp2[MP(i,j)]<<endl;
         //       ans+=mp1[MP(i,j)]*mp2[MP(i,j)];
         //    }
         // }
         cout<<ans<<endl;
      //   vector<pair<int,int>> incr;
      //    vector<pair<int,int>> decr;
      //    for(int i=0;i<n;i++){
      //       for(int j=i+2;j<n;j++){
      //           if(arr[i]<arr[j]){
      //               incr.push_back({i,j});
      //             }
      //       }
      //    }
      //    for(int i=n-1;i>=0;i--){
      //       for(int j=i-2;j>=0;j--){
      //           if(arr[i]<arr[j]){
      //               decr.push_back({j,i});   
      //             }
      //       }
      //    }
      //    sort(incr.begin(),incr.end());
      //    sort(decr.begin(),decr.end());
      //    // print increasing
      //    cout<<"increasing"<<endl;
      //    for(int i=0;i<incr.size();i++){
      //          cout<<incr[i].F+1<<" "<<incr[i].S+1<<endl;
      //    }
      //    cout<<"decreasing"<<endl;
      //    for(int i=0;i<decr.size();i++){  

      //          cout<<decr[i].F+1<<" "<<decr[i].S+1<<endl;
      //    }
        //vasort(a);
    }
    return 0;
}
//vector<vector<int>> vec( n , vector<int> (m, 0));
//think before you code
//special cases
