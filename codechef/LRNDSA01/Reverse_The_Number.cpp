#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
    long long int mod=1000000007;
	cin >> t;
    while(t--)
    {
        int n;
        
        cin>>n;
        int ans=0;
        while(n)
        {
            ans*=10;
            int modu=n%10;
            ans+=modu;
            n=n/10;
            

        }
        cout<<ans<<'\n';
    }
    return 0;
}