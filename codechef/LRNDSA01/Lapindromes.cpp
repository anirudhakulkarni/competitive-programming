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
        string n,n1,n2;
        cin>>n;
        n1=n.substr(0,n.length()/2);
        n2=n.substr(n.length()/2+1,n.length()/2);
        sort(n1.begin(),n1.end());
        sort(n2.begin(),n2.end());
        if(n1==n2)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }
    return 0;
}