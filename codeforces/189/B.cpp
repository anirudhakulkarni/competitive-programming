    
#include <bits/stdc++.h>
#define printvector(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define printstack(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define PI 3.14159265359
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define endl "\n"
using namespace std;
 
long long int mod=1000000007;
 
int main()
{
    fio;
	ll t;
// 	cin >> t;
//     while(t--)
//     {
        long long int n,sum=0,ans=0;
        cin>>n>>sum;
        
            for (long long int i = 1; i < n; i++) {
        for (long long int j = 1; j < sum; j++) {
            ans += min(i, n - i) * min(j, sum - j);
        }
    }
    cout<<ans<<endl;
    return 0;
}
