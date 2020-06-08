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
	
        long long int n,sum=0,maxnum=0;
        cin>>n;
        vector<int> arra(n);
        for(int i=0;i<n;i++)
        {
            cin>>arra[i];
        }
        vector<int> arrb(n);
        for(int i=0;i<n;i++)
        {
            cin>>arrb[i];
        }
        
        
//        printvector(arr);
//        sort(arr.begin(),arr.end());



    
    return 0;
}