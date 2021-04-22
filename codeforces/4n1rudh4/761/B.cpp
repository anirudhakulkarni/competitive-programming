#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
#define pll pair<ll, ll>
#define vpl vector<pll>
#define vb vector<bool>
#define PB push_back
#define MP make_pair
#define ln "\n"
#define forn(i,e) for(ll i=0; i<e; i++)
#define forsn(i,s,e) for(ll i=s; i<e; i++)
#define rforn(i,e) for(ll i=e; i>=0; i--)
#define rforsn(i,s,e) for(ll i=s; i>=e; i--)
#define vasort(v) sort(v.begin(), v.end())
#define vdsort(v) sort(v.begin(), v.end(),greater<ll>())
#define F first
#define S second
 
#define out1(x1) cout << x1 << ln
#define out2(x1,x2) cout << x1 << " " << x2 << ln
#define out3(x1,x2,x3) cout << x1 << " " << x2 << " " << x3 << ln
#define out4(x1,x2,x3,x4) cout << x1 << " " << x2 << " " << x3 << " " << x4 << ln
#define out5(x1,x2,x3,x4,x5) cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << ln
#define out6(x1,x2,x3,x4,x5,x6) cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << " " << x6 << ln
 
#define in1(x1) cin >> x1
#define in2(x1,x2) cin >> x1 >> x2
#define in3(x1,x2,x3) cin >> x1 >> x2 >> x3
#define in4(x1,x2,x3,x4) cin >> x1 >> x2 >> x3 >> x4
#define in5(x1,x2,x3,x4,x5) cin >> x1 >> x2 >> x3 >> x4 >> x5
#define in6(x1,x2,x3,x4,x5,x6) cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6
 
#define mz(a)   memset(a,0,sizeof(a))
#define arrin(a,n) forn(i,n) cin >> a[i];
#define arrout(a,n) forn(i,n) {cout << a[i] << " ";} cout << ln;
#define TYPEMAX(type)   std::numeric_limits<type>::max()
#define TYPEMIN(type)   std::numeric_limits<type>::min()
 
#define zoom ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
bool checkf(vector<ll> arr1,vector<ll> arr2){
    for (int i = 0; i < arr1.size(); ++i)
    {
        if(arr1[i]!=arr2[i]){
            return false;
        }
    }
    return true;
} 
int n, L;
int a[55], b[55];
 
int main() {
  scanf("%d%d", &n, &L);
  for (int i = 1; i <= n; ++i) scanf("%d", &a[i]);
  for (int i = 1; i <= n; ++i) scanf("%d", &b[i]);
  bool ans = false;
  for (int start = 1; start <= n; ++start) { // the start of b
    bool match = true;
    for (int j = 1, k = start; j <= n; ++j) {
      int da = (a[j] - a[1] + L) % L;
      int db = (b[k] - b[start] + L) % L;
      //cout << da << db << endl;
      if (da != db) match = false;
      k = k % n + 1;
    }
    if (match) {
      ans = true;
      break;
    }
  }
  if (ans) puts("YES");
  else puts("NO");
  return 0;
}