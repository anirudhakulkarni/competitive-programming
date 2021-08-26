
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


void solve(string s, ll n) {
    string ans = "";
    int two = 0, five = 0, seven = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9') {
            cout << 1 << endl << s[i] << endl;
            return;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '2' && i > 0) {
            cout << 2 << endl << s[i - 1] << 2 << endl;
            return;
        }
        if (s[i] == '5' && i > 0) {
            cout << 2 << endl << s[i - 1] << 5 << endl;
            return;
        }
        if (s[i] == '5') if (five) { cout << 2 << endl << 55 << endl; return; } else { five = 1; }
        if (s[i] == '2') if (two) { cout << 2 << endl << 22 << endl; return;} else { two = 1; }
        if (s[i] == '7')
            if (seven) {
                cout << 2 << endl << 77 << endl; return;
            }
            else {
                seven = 1;
                if (two) {
                    cout << 2 << endl << 27 << endl; return;
                }
                if (five) {
                    cout << 2 << endl << 57 << endl; return;
                }
            }
    }
    cout << 2 << endl << 33 << endl; return;
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
        cin >> s;
        solve(s, n);
        //vasort(a);
    }
    return 0;
}
//vector<vector<int>> vec( n , vector<int> (m, 0));
//think before you code
//special cases
