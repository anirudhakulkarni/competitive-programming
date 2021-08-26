#include "bits/stdc++.h"
using namespace std;
using namespace std;
typedef long long ll;
typedef vector<ll> vli; 
typedef vector< vli > vvli; 
/////////////////////////
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define loop(i,a,b) for (int i = a; i < b; i++)
//////////////////////////
#define printvector(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define printstack(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define PI_val 3.14159265359
#define printpair(n) cout<<n.F<<" "<<n.S
#define printvop(n) loop(i,0,n.size()-1){printpair(n[i])<<endl;}
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
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
    ll t;
    cin >> t;
    ll power[31];
    power[0]=1;
  for(int i=1;i<=30;i++){
      power[i]=2*power[i-1];
  }
    while(t--)
    {
        ll n,k,x,i,j;
      cin>>n>>k;
      ll a[n];
      for(i=0;i<n;i++){
          cin>>a[i];
      }
      ll count[31];
      for(i=0;i<31;i++){
          count[i]=0;
      }
      for(i=0;i<n;i++){
          x=a[i];
          j=0;
          while(x!=0){
              if(x%2==1){
                  count[j]++;
              }
              x/=2;
              j++;
          }
      }
      vector<pair<ll,ll>>res;
      x=1;
      for(i=0;i<=30;i++){
          res.push_back(make_pair(count[i]*x,50-i));
          x*=2;
      }
      sort(res.begin(),res.end());
      ll ans=0;
      for(i=30;i>30-k;i--){
          ans+=power[50-res[i].second];
      }
      cout<<ans<<endl;
  }
  return 0;
}