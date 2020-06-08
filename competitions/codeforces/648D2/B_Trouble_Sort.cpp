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
	cin >> t;
    while(t--)
    {
        long long int n,m,sum=0;
        cin>>n>>m;
        vector<vector<int>> arr(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        
//        printvector(arr);
//        sort(arr.begin(),arr.end());



    }
    return 0;
}