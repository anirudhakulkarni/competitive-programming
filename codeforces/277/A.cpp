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
#define ln "\n"
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
#define arr2out(a,n,m) forn(i,n){forn(j,m){cout << a[i][j] << " ";}cout << ln;}
#define TYPEMAX(type)   std::numeric_limits<type>::max()
#define TYPEMIN(type)   std::numeric_limits<type>::min()

#define zoom ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
int fact(int n) {
    int ans = 1;
    for (int i = 2; i < n + 1; ++i)
    {
        ans *= i;
    }
    return ans;
}
double func(int a, int b) {
    // out2(a, b);
    if ((a + b) % 2 == 1 or abs(a) > b) {
        // cout << 00000000 << endl;
        return 0;
    }
    // out2((a + b) / 2, (b - a) / 2);
    return fact(b) / (fact((b + a) / 2) * fact((b - a) / 2));
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
    // cin >> t;
    // while(t--)
    // {
    ll a, b, x, y, p, q, n, m, k, pf = 0, nf = 0, ps = 0, ns = 0, sum = 0, ans = 0, res = 0;
    string s, r = "";
    cin >> n >> m;
    int adj[200][200] = {0};
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        if (a != 0) { sum = 1; }
        for (int j = 0; j < a; ++j)
        {
            cin >> b;
            adj[i][n + b - 1] = 1;
            adj[n + b - 1][i] = 1;
        }
    }
    if (sum == 0) {cout << n << endl; return 0;}
    int vis[200] = {0};
    stack<int> st;
    for (int i = 0; i < n; ++i)
    {
        if (!vis[i]) {
            ans++;
            st.push(i);
            while (!st.empty()) {
                res = st.top();
                st.pop();
                if (!vis[res]) {
                    vis[res] = 1;
                    for (int j = 0; j < 200; ++j)
                    {
                        if (adj[res][j]) {
                            st.push(j);
                        }
                    }
                }
            }
        }
    }
    cout << ans - 1 << endl;
    return 0;
}
//vector<vector<int>> vec( n , vector<int> (m, 0));
//think before you code
//special cases
