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
        long long int n,sum=0;
        cin>>n>>sum;
        if(sum>=2 && n>=2){
            cout<<(n-1)*(sum-1)<<endl;
        }
        else{
            cout<<0<<endl;
        }
    return 0;
}