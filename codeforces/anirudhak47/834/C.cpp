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
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif
    int T,a,b;
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d%d", &a, &b);
		long long t = 1ll * a * b;
		int l = 1, r = 1000000, ans = 0;
		while(l <= r)
		{
			int mid = (l + r) >> 1;
			long long tmp = 1ll * mid * mid * mid;
			if(tmp < t)
			{
				l = mid + 1;
			}
			else if(tmp > t)
			{
				r = mid - 1;
			}
			else
			{
				ans = mid;
				break;
			}
		}
		if(ans && a % ans == 0 && b % ans == 0)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
 
 
 
	return 0;
}