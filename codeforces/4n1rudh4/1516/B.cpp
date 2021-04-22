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
#define TYPEMAX(type)   std::numeric_limits<type>::max()
#define TYPEMIN(type)   std::numeric_limits<type>::min()
 
#define zoom ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
 
 bool solve(vl arr, ll n){
    ll ans=arr[0];
        for (int i = 1; i < n; ++i)
        {
            ans=ans^arr[i];
        }

    if(ans==0){
        return true;
 }
    // ll j=1;
    ll temp=0;
    ll flag=1;
    ll count=0;
    for (int i = 0; i < n; ++i)
    {
        if(flag){
            temp=arr[i];
            flag=0;       
        }
        else{
            temp^=arr[i];
        }
        if(temp==ans){
            if(i==n-1){
                return count>0;
            }
            flag=1;
            count++;
            continue;
        }
        if(temp!=ans && i==n-1){
            return false;
        }
        
    }
 return false;
}
int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/competitive programming/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/competitive programming/testcases/output.in", "w", stdout);
    #endif
    zoom;
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,x,y,p,q,n,m,k,sum=0,ans=0,res=0;
        string s,r;
        cin>>n;
        vl arr(n);
        arrin(arr,n);
        for (int i = 0; i < n; ++i)
        {
            sum^=arr[i];
        }
        if(sum==0){
            cout<<"YES\n";
            continue;
        }
        ll i=0, j=n-1;
        while(i<n){
            ans^=arr[i];
            if(ans==sum){
                break;
            }
            i++;
        }
        while(j>=0){
            res^=arr[j];
            if(res==sum){
                break;
            }
            j--;
        }
        ll temp=0;
        for (int ii = i+1; ii < j; ++ii)
        {
            temp^=arr[ii];
        }
        // out3(temp,i,j);
        if(temp!=sum || i>=j){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
        //vasort(a);
    }
    return 0;
}