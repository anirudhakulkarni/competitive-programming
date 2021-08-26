#include "bits/stdc++.h"
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

long long int binomialCoeff(long long int n,long long int k) 
{ 
    long long int res = 1; 
  
    // Since C(n, k) = C(n, n-k) 
    if (n<k){
    	return 0;
    }
    if(n==k){
    	return 1;
    }
    if (k > n - k) 
        k = n - k; 
  
    // Calculate value of 
    // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1] 
    for (long long int i = 0; i < k; ++i) { 
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
    long long int a,b,x,t,n,m,k,sum=0,ans=0,res=0;
    cin >> n>>m>>t;
    ans=binomialCoeff(n,4)*binomialCoeff(m,1);
    n=n-4;
    m--;
    t-=5;
    for(int i=0;i<=t;i++){
    	sum+=binomialCoeff(n,i)*binomialCoeff(m,t-i);

    }
    cout<<ans*sum;
    return 0;
}