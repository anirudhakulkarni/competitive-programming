#include <bits/stdc++.h>
#define printvector(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<endl;
#define printarry(n) for(int i=0;i<n.length();i++){cout<<n[i]<<" ";}cout<<endl;
#define printstack(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<endl;
#define inarray(n) int arr[n];for(int i=0;i<n;i++){cin>>n[i];}
using namespace std;
long long int mod=1000000007;
//vector<vector<int> > a( 1000 , vector<int> (1000,-1));  
 
  
// This function finds factorial of large numbers 
// and return them




int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	long int t;
	cin >> t;
    while(t--)
    {
        long long int n,x,sum=0,odd=0,even=0;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
//        sort(arr.begin(),arr.end());
        for (int i=0;i<n;i++)
        {
            if(arr[i]&1){
                odd++;
            }
            else{
                even++;
            }

        }
        for (int i=1;i<min(x,odd)+1;i+=2){
            if (even>=x-i){
                cout<<"Yes\n";
                sum=1;
                break;
            }
        }
        if (!sum)cout<<"No\n";


    }
    return 0;
}