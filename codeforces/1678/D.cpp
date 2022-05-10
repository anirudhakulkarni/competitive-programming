
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
      ll a, b, x, y, p, q, n, m = 0, k, sum = 0, ans = 0, res = 0;
      string s, r;
      cin >> n;
      cin >> m;
      cin >> s;
      int dp[n - m];
      int rows[n * m] = {0};
      int cols[n * m] = {0};
      int colin[m] = {0};
      // rows:
      int lastone = -1;
      for (ll i = 0; i < n * m; i++)
      {
         if (s[i] == '1')
            lastone = i;
         if (i < m)
         {
            if(i==0){
               rows[i] = s[i] - '0';
            }
            else{
               if(rows[i-1]==0){
                  rows[i] = rows[i - 1] + (s[i] - '0');
               }
               else{
                  rows[i] = rows[i - 1] ;
               }
            }
         }
         else
         {
            if (s[i] == '1')
            {
               rows[i] = rows[i - m] + 1;
            }
            else
            {
               if (i - lastone < m)
               {
                  rows[i] = rows[i - m] + 1;
               }
               else
               {
                  rows[i] = rows[i - m];
               }
            }
         }
      }
      // cols:
      for (int i = 0; i < n * m; i++)
      {

         int flag = 0;
         if (i < m)
         {
            colin[i] = s[i] - '0';
            if (i == 0)
               cols[i] = s[i] - '0';
            else
            {
               if (s[i] == '1')
               {
                  cols[i] = cols[i - 1] + 1;
                  
               }
                  
               else
                  cols[i] = cols[i - 1];
            }
         }
         else
         {
            if (s[i] == '1')
            {
               flag = 0;
               if(colin[i % m] == 0){
                  flag = 1;
                  colin[i % m] = 1;
               }
               
               // cout<<flag<<endl;
               if (flag == 1)
               {
                  cols[i] = cols[i - 1] + 1;
               }
               else
               {
                  cols[i] = cols[i - 1];
               }
            }
            else
            {
               cols[i] = cols[i - 1];
            }
         }
      }
      for (int i = 0; i < n * m; i++)
      {
         // cout << rows[i] << " " << cols[i] << "\n";
         cout << rows[i] + cols[i] << " ";
      }
      cout << endl;
   }

   return 0;
}
// vector<vector<int>> vec( n , vector<int> (m, 0));
// think before you code
// special cases
