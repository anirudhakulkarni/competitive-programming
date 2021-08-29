
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
ll minSwaps(string s, vl orr , vl err) {
    ll n = s.size();
    if (n == 1) { return 0; }
    ll odd = 0, even = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '1') {
            odd++;
        }
        else {
            even++;
        }
    }
    if (abs(odd - even) > 1) { return -1; }
    ll ans = 0, ans2 = 0;
    if (odd > even || (odd == even)) {
        ll j = 0, k = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0 && s[i] == '0') {
                while (orr[j] < i) {
                    j++;
                }
                ans += orr[j] - i;
                s[i] = '1';
                s[orr[j]] = '0';
                j++;
            }
            else if (i % 2 == 1 && s[i] == '1') {
                while (err[k] < i) {
                    k++;
                }
                ans += err[k] - i;
                s[i] = '0';
                s[err[k]] = '1';
                k++;
            }
        }
    }
    if (odd < even || (odd == even)) {
        ll j = 0, k = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0 && s[i] == '1') {
                while (err[j] < i) {
                    j++;
                }
                ans2 += err[j] - i;
                s[i] = '0';
                s[err[j]] = '1';
                j++;
            }
            else if (i % 2 == 1 && s[i] == '0') {
                while (orr[k] < i) {
                    k++;
                }
                ans2 += orr[k] - i;
                s[i] = '1';
                s[orr[k]] = '0';
                k++;
            }
        }
    }
    // out1(s);
    if (odd == even) { return min(ans, ans2); }
    // out2(odd, even);
    return max(ans, ans2);
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
        string s = "", r;
        cin >> n;
        vl arr(n);
        vl odd;
        vl even;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            if (arr[i] % 2) {
                s += '1';
                odd.push_back(i);
            }
            else {
                s += '0';
                even.push_back(i);
            }
        }
        ans = minSwaps(s, odd, even);
        out1(ans);
    }
    return 0;
}
//vector<vector<int>> vec( n , vector<int> (m, 0));
//think before you code
//special cases
