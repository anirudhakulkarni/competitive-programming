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
int ans[500][500]={0};
 int solve(int n,vl occur,vl arr){
    for (int i = 0; i < n; ++i)
    {
        // occur[i]--;
        // ans[i][i]=arr[i];
        stack<pair<int,int>> stack;
        stack.push(make_pair(i,i));
        while(occur[i]!=0 && !stack.empty()){
        //     for (int i = 0; i < n; ++i)
        // {
        //     for (int j = 0; j < i+1; ++j)
        //     {
        //         cout<<ans[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
            // out2(i,occur[i]);
            int jj=stack.top().second;
            int ii=stack.top().first;
            stack.pop();
            if(jj>=0 && ii<n && ans[ii][jj]==0){
                ans[ii][jj]=arr[i];
                occur[i]--;
                // out2(ii,jj);
                if(jj-1>=0 && ans[ii][jj-1]==0){
                    stack.push(make_pair(ii,jj-1));
                }
                else if(ii+1<n && ans[ii+1][jj]==0){
                    stack.push(make_pair(ii+1,jj));
                }

            }
            else{
                return 0;
            }
        }
        // if(occur[i]>0){
        //     return 0;
        // }
    }

    return 1;
 }
int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("../testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("../testcases/output.in", "w", stdout);
    #endif
    zoom;
    // ll t;
    // cin >> t;
    // while(t--)
    // {
    ll a,b,x,y,p,q,n,m,k,sum=0,res=0;
    string s,r;
    cin>>n;
    vl arr(n);
    arrin(arr,n);
    vl occur(n);
    for (int i = 0; i < n; ++i)
    {
        occur[i]=arr[i];
    }
    // arrout(occur,n);
    if(solve(n,occur,arr)){
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < i+1; ++j)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        //vasort(a);
    }
    else{
        cout<<-1<<endl;
    }
    // }
    return 0;
}