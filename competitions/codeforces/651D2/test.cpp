#include "bits/stdc++.h"
using namespace std;
using namespace std;
typedef long long ll;
typedef vector<int> vi; 
typedef vector< vi > vvi; 
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
long long int mod=1000000007;
//////////////////////////
int binomialCoeff(int n, int k) 
{ 
    int res = 1; 
  
    // Since C(n, k) = C(n, n-k) 
    if (k > n - k) 
        k = n - k; 
  
    // Calculate value of 
    // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1] 
    for (int i = 0; i < k; ++i) { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
  
    return res; 
} 
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
    while(t--)
    {
        long long int a,b,x,n,m,k,sum=0,ans=0,res=0;
        cin>>n>>a>>b;
        if(b<a){
            sum=a;
            a=b;
            b=sum;
        }
        int xx=b-a+1;
        int yy=n-n-a-1;
        ans=(xx-1)*yy+(yy-1)*xx;
        if(xx>2){
            ans+=binomialCoeff(xx,3);
        }
        if(yy>2){
            ans+=binomialCoeff(xx,3);   
        }
        cout<<ans<<endl;
//       printvector(arr);
//        sort(arr.begin(),arr.end());


    }
    return 0;
}

