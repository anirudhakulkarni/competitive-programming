#include <bits/stdc++.h>

using namespace std;
long long int mod=1000000007;
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	long int t;
	cin >> t;
    while(t--)
    {
        long long int n,sum=0;
        cin>>n;
        vector<int> arr(n);
        while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==c)
        {
            cout<<(b+1)/2<<endl;
        }
        else
        {
            cout<<(b)/2<<endl;
        }}
        
    }
    return 0;
}