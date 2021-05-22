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
        unordered_map<string, int> umap;
        cin >> n;
        vector<tuple<string, int, int, string, int>> arr;
        vector<string> ansarr;
        for (int i = 0; i < n; ++i)
        {
            cin >> s >> a >> b >> r >> x;
            arr.push_back(make_tuple(s, a, b, r, x));
        }
        sort(begin(arr), end(arr),
        [](tuple<string, int, int, string, int> const & t1, tuple<string, int, int, string, int> const & t2) {
            if (get<2>(t1) == get<2>(t2)) {
                return get<1>(t1) < get<1>(t2);
            }
            return get<2>(t1) < get<2>(t2); // or use a custom compare function
        }
            );
        for (int i = 0; i < n; ++i)
        {
            if (umap.find(get<3>(arr[i])) == umap.end()) {
                umap[get<3>(arr[i])] = get<4>(arr[i]);
                ansarr.push_back(get<0>(arr[i]));
            }
            else {
                if (umap[get<3>(arr[i])] < get<4>(arr[i])) {
                    ansarr.push_back(get<0>(arr[i]));
                    umap[get<3>(arr[i])] = get<4>(arr[i]);
                }
            }
        }
        sort(ansarr.begin(), ansarr.end());
        for (int i = 0; i < ansarr.size(); ++i)
        {
            cout << ansarr[i] << " ";
        }
        cout << endl;
        //vasort(a);
    }
    return 0;
}
//vector<vector<int>> vec( n , vector<int> (m, 0));
//think before you code
//special cases
