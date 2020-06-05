#include <bits/stdc++.h>
#define printvector(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<endl
#define printstack(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<endl
#define inarray(n) for(int i=0;i<n;i++){cin>>n[i];}
using namespace std;
long long int mod=1000000007;
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	long int t;
	cin >> t;

        long long int n,sum=0;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        printvector(vec);
    return 0;
}