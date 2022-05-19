
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
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, e) for (ll i = e; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define vasort(v) sort(v.begin(), v.end())
#define vdsort(v) sort(v.begin(), v.end(), greater<ll>())
#define F first
#define S second
#define out1(x1) cout << x1 << endl
#define out2(x1, x2) cout << x1 << " " << x2 << endl
#define out3(x1, x2, x3) cout << x1 << " " << x2 << " " << x3 << endl
#define out4(x1, x2, x3, x4) cout << x1 << " " << x2 << " " << x3 << " " << x4 << endl
#define out5(x1, x2, x3, x4, x5) cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << endl
#define out6(x1, x2, x3, x4, x5, x6) cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << " " << x6 << endl

#define in1(x1) cin >> x1
#define in2(x1, x2) cin >> x1 >> x2
#define in3(x1, x2, x3) cin >> x1 >> x2 >> x3
#define in4(x1, x2, x3, x4) cin >> x1 >> x2 >> x3 >> x4
#define in5(x1, x2, x3, x4, x5) cin >> x1 >> x2 >> x3 >> x4 >> x5
#define in6(x1, x2, x3, x4, x5, x6) cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6

#define mz(a) memset(a, 0, sizeof(a))
#define arrin(a, n) forn(i, n) cin >> a[i];
#define arrout(a, n)                   \
   forn(i, n) { cout << a[i] << " "; } \
   cout << endl;
#define arr2out(a, n, m)                     \
   forn(i, n)                                \
   {                                         \
      forn(j, m) { cout << a[i][j] << " "; } \
      cout << endl;                          \
   }
#define TYPEMAX(type) std::numeric_limits<type>::max()
#define TYPEMIN(type) std::numeric_limits<type>::min()

#define zoom                         \
   ios_base::sync_with_stdio(false); \
   cin.tie(NULL);                    \
   cout.tie(NULL)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

int getcost(string s,int removedones){
   int cost=0;
   for(int i=0;i<s.size();i++){
      if(s[i]=='0'){
         cost+=1;
      }
   }
   return max(cost,removedones);
}

int main()
{
#ifndef ONLINE_JUDGE
   // for getting input from input.txt
   freopen("../testcases/input.in", "r", stdin);
   // for writing output to output.txt
   freopen("../testcases/output.in", "w", stdout);
#endif
   zoom;
   ll t;
   cin >> t;
   while (t--)
   {
      ll l1, l2, r1, r2, a, b, x, y, p, q, n, m = 0, k, sum = 0, ans = 0, res = 0;
      // string s;
      cin>>n>>m;
      int arr[n][m]={0};
      int temp[m]={0};
      int counts[n]={0};
      forn(i,n){
         forn(j,m){
            cin>>arr[i][j];
            if(j!=0){
               if(arr[i][j]<arr[i][j-1]){
                  counts[i]++;
               }
            }
            if(i==0)temp[j]=arr[i][j];
         }
      }
      // print counts
      // forn(i,n){
      //    cout<<counts[i]<<" ";
      // }
      // cout<<endl;
      // if all counts are zero then return 1 1 
      bool flag=true;
      forn(i,n){
         if(counts[i]!=0){
            flag=false;
            
            // swap ith row with 0th row
            forn(j,m){
               swap(arr[i][j],arr[0][j]);
               temp[j]=arr[0][j];
            }
            swap(counts[i],counts[0]);
            // print arr
            // forn(j,n){
            //    forn(k,m){
            //       cout<<arr[j][k]<<" ";
            //    }
            //    cout<<endl;
            // }
            break;
         }
      }
      if(flag){
         cout<<1<<" "<<1<<endl;
         continue;
      }
      vl locations;
      // sort arr[0][0] to arr[0][m-1]
      sort(temp,temp+m);
      for (int i = 0; i < m; i++)
      {
         if(temp[i]!=arr[0][i]){
            ans++;
            locations.PB(i);
         }
      }
      // print locations
      // forn(i,locations.size()){
      //    cout<<locations[i]<<" ";
      // }
      // cout<<endl;
      if(ans!=0 && ans!=2){
         cout<<-1<<endl;
         continue;
      }
      if(ans==2){
         // swap the two locations for all the rows
         forn(i,n){
            swap(arr[i][locations[0]],arr[i][locations[1]]);
         }
         // print arr
         // forn(i,n){
         //    forn(j,m){
         //       cout<<arr[i][j]<<" ";
         //    }
         //    cout<<endl;
         // }
         
         // check if all the rows are in non decreasing order
         bool flag=true;
         forn(i,n){
            forn(j,m-1){
               if(arr[i][j]>arr[i][j+1]){
                  cout<<-1<<endl;
                  flag=false;
                  break;
               }

            }
            if(!flag)break;
         }
         if(flag){
            cout<<locations[0]+1<<" "<<locations[1]+1<<endl;
         }
      }
      

      
   }

   return 0;
}
// vector<vector<int>> vec( n , vector<int> (m, 0));
// think before you code
// special cases
