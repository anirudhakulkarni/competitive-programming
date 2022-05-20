
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
      ll a, b, x, y, p, q, n, m = 0, k, z,sum = 0, ans = 0, res = 0;
      // string s, r;
      cin >> x >> y>>z;
      cout<<x%y<<" "<<y%z<<" "<<z%x<<endl;
      continue;
      ll v[n];
      // vector<pair<ll, ll>> vv;

      map<ll, ll> occ;
      set<ll> s;

      for (int i = 0; i < n; i++)
      {
         cin >> v[i];
         occ[v[i]]++;
         // res=max(res,v[i]);
         s.insert(v[i]);
      }
      // int ind[s.size()];
      // sort(vv.begin(),vv.end());

      // int ind[200001];

      for (auto it = s.begin(); it != s.end(); it++)
      {
         if (occ[*it] >= k)
         {
            occ[*it] = 1;
         }
         else
         {
            occ[*it] = 0;
         }
      }
      int maxl = 0;
      int lastlength = 0;
      int le, ri, mle, mri;
      // iterate on set
      int i = 0;
      bool flag = false;
      int lastval = 0;
      for (auto it = s.begin(); it != s.end(); it++)
      {
         // cout<<*it<<" "<<occ[*it]<<endl;
         // for(int i=1;i<=res;i++){
         // cout<<ind[i]<<" ";
         i = *it;
         if (flag == false)
         {
            flag = true;
            lastval = i;
            le = i;
            ri = i;
            mle = le;
            mri = ri;
            maxl = 1;
            lastlength = 1;
         }
         else
         {
            if (i == lastval + 1)
            {
               if (occ[i])
               {
                  lastlength++;
                  ri = i;
               }
               else
               {
                  if (lastlength > maxl)
                  {
                     maxl = lastlength;
                     mle = le;
                     mri = ri;
                  }
                  lastlength = 1;
                  le = *next(it,1);
                  ri = *next(it,1);
               }
            }
            else
            {
               if (occ[i])
               {
                  if (lastlength > maxl)
                  {
                     maxl = lastlength;
                     mle = le;
                     mri = ri;
                  }
                  lastlength = 1;
                  le = i ;
                  ri = i ;
               }
               else{
                  if (lastlength > maxl)
                  {
                     maxl = lastlength;
                     mle = le;
                     mri = ri;
                  }
                  lastlength = 1;
                  le = *next(it,1);
                  ri = *next(it,1);
               }
            }
            lastval = i;
         }
         // i++;
      }
      if (lastlength > maxl)
      {
         maxl = lastlength;
         mle = le;
         mri = ri;
      }
      if (maxl > 0 && occ[mle] >= 1 && occ[mri] >= 1)
      {
         cout << mle << " " << mri << endl;
      }
      else
      {
         cout << -1 << endl;
      }
      // cout<<mle<<" "<<mri<<" "<<endl;
      // maxl=max(maxl,lastlength);
      // cout<<maxl<<endl;

      // sort(v.begin(), v.end(), greater<pair<ll, ll>>());
      // while(q--){
      //    // cin>>x;
      //    cin>>ans;
      //    // find first number greater than or equal to ans
      //    int idx=lower_bound(v, v+n, ans)-v;
      //    if(idx==n){
      //       cout<<"-1"<<endl;
      //       continue;
      //    }
      //    cout<<idx+1<<endl;
      //    // if(res<ans){
      //    //    cout<<-1<<endl;
      //    //    continue;
      //    // }
      //    // // cout << ans <<" "<<n<< endl;
      //    // sum=0;
      //    // int i=0;
      //    // while(sum<ans and i<n){
      //    //    sum+=v[i];
      //    //    // cout<<sum<<endl;
      //    //    i++;
      //    // }
      //    // if(i>n or sum<ans){
      //    //    cout<<-1<<endl;

      //    // }
      //    //    else{
      //    //       cout<<i<<endl;
      //    //    }
      // }
      // at each point sum all diagonal elements
      // sort(arr,arr+n);
      // int mindiff;
      // for(int i=0;i<n-1;i++){
      //    if(i==0){
      //       int tempdiff=0;
      //       for(int j=0;j<m;j++){
      //          tempdiff+=abs(arr[i][j]-arr[i+1][j]);
      //       }
      //       mindiff=tempdiff;
      //    }
      //    else{
      //       int tempdiff=0;
      //       for(int j=0;j<m;j++){
      //          tempdiff+=abs(arr[i][j]-arr[i+1][j]);
      //       }
      //       mindiff=min(mindiff,tempdiff);
      //    }
      // }
      // cout<<mindiff<<endl;

      // for(int i=0;i<n;i++){
      //    sum+=arr[i]-mins;
      // }
      // cout<<sum<<endl;

      // cout << endl;
   }

   return 0;
}
// vector<vector<int>> vec( n , vector<int> (m, 0));
// think before you code
// special cases
