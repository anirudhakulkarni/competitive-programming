#include <bits/stdc++.h>
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

int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif
    int NN=1000005;
    long long int t,a, b,x,n,m,k,sum=0,res=0,c;

	cin >> n >> a >> b >> c;
	long long int dp[n+1];
	fill(dp, dp+n+1, -1e10); dp[0]=0;
	for (int i=a; i<=n; i++) dp[i]=max(dp[i], dp[i-a]+1);
	for (int i=b; i<=n; i++) dp[i]=max(dp[i], dp[i-b]+1);
	for (int i=c; i<=n; i++) dp[i]=max(dp[i], dp[i-c]+1);
	cout << dp[n];
	return 0;
}