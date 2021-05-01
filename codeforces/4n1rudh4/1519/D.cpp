// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
// #define pll pair<ll, ll>
// #define vpl vector<pll>
// #define vb vector<bool>
// #define PB push_back
// #define MP make_pair
// #define endl "\n"
#define forn(i,e) for(ll i=0; i<e; i++)
// #define forsn(i,s,e) for(ll i=s; i<e; i++)
// #define rforn(i,e) for(ll i=e; i>=0; i--)
// #define rforsn(i,s,e) for(ll i=s; i>=e; i--)
// #define vasort(v) sort(v.begin(), v.end())
// #define vdsort(v) sort(v.begin(), v.end(),greater<ll>())
// #define F first
// #define S second
// #define ln "\n"
// #define out1(x1) cout << x1 << ln
// #define out2(x1,x2) cout << x1 << " " << x2 << ln
// #define out3(x1,x2,x3) cout << x1 << " " << x2 << " " << x3 << ln
// #define out4(x1,x2,x3,x4) cout << x1 << " " << x2 << " " << x3 << " " << x4 << ln
// #define out5(x1,x2,x3,x4,x5) cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << ln
// #define out6(x1,x2,x3,x4,x5,x6) cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << " " << x6 << ln
 
// #define in1(x1) cin >> x1
// #define in2(x1,x2) cin >> x1 >> x2
// #define in3(x1,x2,x3) cin >> x1 >> x2 >> x3
// #define in4(x1,x2,x3,x4) cin >> x1 >> x2 >> x3 >> x4
// #define in5(x1,x2,x3,x4,x5) cin >> x1 >> x2 >> x3 >> x4 >> x5
// #define in6(x1,x2,x3,x4,x5,x6) cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6
 
// #define mz(a)   memset(a,0,sizeof(a))
#define arrin(a,n) forn(i,n) cin >> a[i];
// #define arrout(a,n) forn(i,n) {cout << a[i] << " ";} cout << ln;
// #define arr2out(a,n,m) forn(i,n){forn(j,m){cout << a[i][j] << " ";}cout << ln;}
// #define TYPEMAX(type)   std::numeric_limits<type>::max()
// #define TYPEMIN(type)   std::numeric_limits<type>::min()
 
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
    // cin >> t;
    // while(t--)
    // {
        ll x,n,sum=0,ans=0,res=0;
        string s,r;
        cin>>n;
        vl arr(n);
        arrin(arr,n);
        vl arr2(n);
        // vl ansarr(n);
        vl sumsofar(n);
        for (int i = 0; i < n; ++i)
        {
            cin>>arr2[i];
            // ansarr[i]=;
            sum+=arr[i]*arr2[i];
            sumsofar[i]=sum;
        }
        ans=sum;
        res=sum;
        ll temp=0;
        // out1(ans);
        // for (int i = 1; i < n; ++i)
        // {
        //     for (int j = i+1; j < n+1; ++j)
        //     {
                
        //     }
        // }
        int i=1;
        for (int j = i+1; j < n+1; ++j)
                {
                    temp=0;
                    x=i+j-1;
                    for (int k = i; k < j+1; ++k)
                    {
                        temp+=arr[x-k]*arr2[k-1];
                    }
                    // if(i==1){
                    //     // out4(temp,sumsofar[j-1],0,ans-sumsofar[j-1]+temp);
                    res=max(res,ans-sumsofar[j-1]+temp);
                    
                    
                }
        for (int i = 2; i < n; ++i)
        {
                for (int j = i+1; j < n+1; ++j)
                {
                    temp=0;
                    x=i+j-1;
                    for (int k = i; k < j+1; ++k)
                    {
                        temp+=arr[x-k]*arr2[k-1];
                    }
                        // out4(temp,sumsofar[j-1],sumsofar[i-2],ans-sumsofar[j-1]+temp);
                    res=max(res,ans-sumsofar[j-1]+sumsofar[i-2]+temp);
                    
                    
                }
            }
        
        cout<<res<<"\n";
        //vasort(a);
    // }
    return 0;
}
//vector<vector<int>> vec( n , vector<int> (m, 0));
//think before you code
//special cases