
//  _  _           _                   _  _      _  _
// | || |   _ __  / | _ __  _   _   __| || |__  | || |
// | || |_ | '_ \ | || '__|| | | | / _` || '_ \ | || |_
// |__   _|| | | || || |   | |_| || (_| || | | ||__   _|
//    |_|  |_| |_||_||_|    \__,_| \__,_||_| |_|   |_|

#include <bits/stdc++.h>
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

ll get(vector<ll>tem) {
    ll ans = 0;
    for (int i = 0; i < 30; i++)
    {
        if (tem[i]) {
            ans += pow(2, i);
        }
    }
    return ans;
}
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
    while (t--)
    {
        ll a, b, x, y, p, q, n, m, k, sum = 0, ans = 0, res = 0;
        string s, r;
        cin >> n;
        vl arr1(n);
        arrin(arr1, n);
        vl arr2(n);
        arrin(arr2, n);
        vector<ll> tem(30, 0);
        ll i = 29;
        while (i >= 0) {
            // arrout(tem, 30);
            tem[i] = 1;
            ans = get(tem);
            sum = 0;
            for (int i = 0; i < n; ++i)
            {
                if (((arr1[i]&ans) != ans ) && ((arr2[i]&ans) != ans) ) {
                    sum = -1;
                    // out3(i, ans, -1);
                    break;
                }
            }
            if (sum == -1) {
                tem[i] = 0;
                i--;
                continue;
            }
            i--;
        }
        ans = get(tem);
        for (int i = 0; i < n; ++i)
        {
            if ((arr1[i]&ans) != ans) {
                res++;
            }
        }
        out2(ans, res);
        //vasort(a);
    }
    return 0;
}
//vector<vector<int>> vec( n , vector<int> (m, 0));
//think before you code
//special cases
