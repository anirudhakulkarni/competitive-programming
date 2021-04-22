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
bool findPartiion(int arr[], int n)
{
    // ll ans=arr[0];
    // int flag=0;
    // for (int i = 0; i < n; ++i)
    // {
    //     if(arr[i]!=ans){
    //         flag=1;
    //         break;
    //     }
    // }
    // if(!flag){
    //     return n;
    // }
    int sum = 0;
    int i, j;
 
    // Calculate sum of all elements
    for (i = 0; i < n; i++)
        sum += arr[i];
 
    if (sum % 2 != 0)
        return false;
 
    bool part[sum / 2 + 1];
 
    // Initialze the part array
    // as 0
    for (i = 0; i <= sum / 2; i++) {
        part[i] = 0;
    }
 
    // Fill the partition table in bottom up manner
 
    for (i = 0; i < n; i++) {
        // the element to be included
        // in the sum cannot be
        // greater than the sum
        for (j = sum / 2; j >= arr[i];
             j--) { // check if sum - arr[i]
            // could be formed
            // from a subset
            // using elements
            // before index i
            if (part[j - arr[i]] == 1 || j == arr[i])
                part[j] = 1;
        }
    }
 
    return part[sum / 2];
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
        ll a,b,x,y,p,q,n,m,k,ans=0,res=0;
        string s,r;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }
        
        if(!findPartiion(arr,n)){
            cout<<0<<endl;
            // continue;
        }
        else{
              cout<<1<<endl;
              int temp[n];
              for (int i = 0; i < n; ++i)
              {
                  temp[i]=arr[i];
              }for (int i = 0; i < n; ++i)
                {
                    if(arr[i]%2==1){
                        cout<<i+1<<endl;
                        return 0;
                    }
                }
              while(1)
                {
                                for (int i = 0; i < n; ++i)
                                {
                                    arr[i]/=2;
                                    if(arr[i]%2==1){
                                        cout<<i+1<<endl;
                                        return 0;
                                    }
                                }
                }
          
        }
        //vasort(a);
    // }
    return 0;
}