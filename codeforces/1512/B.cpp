#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<ll> vli; 
typedef vector< vli > vvli; 
/////////////////////////
#define F first
#define S second
#define PB push_back
#define MP make_pair
//////////////////////////
#define PI_val 3.14159265359
#define vasort(v) sort((v).begin(), (v).end())
#define vdsort(v) sort((v).begin(), (v).end(),greater<int>())
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define ln endl
#define out1(x1) cout << x1 << ln
#define out2(x1,x2) cout << x1 << " " << x2 << ln
#define out3(x1,x2,x3) cout << x1 << " " << x2 << " " << x3 << ln
#define out4(x1,x2,x3,x4) cout << x1 << " " << x2 << " " << x3 << " " << x4 << ln
#define out5(x1,x2,x3,x4,x5) cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << ln
#define out6(x1,x2,x3,x4,x5,x6) cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << " " << x6 << ln
long long mod=1000000007;
//////////////////////////
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif
    fio;
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,x,y,p,q,n,m,k,sum=0,ans=0,res=0;
        string s,r;
        cin>>n;
        vector<string> arr(n);
        vector<pair<int,int>> ansarr;
        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
            for (int j = 0; j < n; ++j)
            {
              if(arr[i][j]=='*'){
                ansarr.push_back(make_pair(i,j));
              }
            }
        }
        if(ansarr[0].second==ansarr[1].second){
          if(ansarr[0].second<n-1){
            arr[ansarr[0].first][ansarr[0].second+1]='*';
            arr[ansarr[1].first][ansarr[0].second+1]='*';
          }
          else{
            arr[ansarr[0].first][ansarr[0].second-1]='*';
            arr[ansarr[1].first][ansarr[0].second-1]='*';
          }
        }
        else if(ansarr[0].first==ansarr[1].first){
          if(ansarr[0].first<n-1){
            arr[ansarr[0].first+1][ansarr[0].second]='*';
            arr[ansarr[0].first+1][ansarr[1].second]='*';
          }
          else{
            arr[ansarr[0].first-1][ansarr[0].second]='*';
            arr[ansarr[0].first-1][ansarr[1].second]='*';
          }
        }
        else {
            arr[ansarr[0].first][ansarr[1].second]='*';
            arr[ansarr[1].first][ansarr[0].second]='*';
        }
//        sort(arr.begin(),arr.end());
                for (int i = 0; i < n; ++i)
        {
            cout<<arr[i]<<endl;
          }
    }
    return 0;
}


