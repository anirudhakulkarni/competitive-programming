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
        /*vector<int> arr(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        for (int i=0;i<n;i++)
        {
            sum+=max(arr.back()-i,0);
            arr.pop_back();
        }
        */
       int maxi=int(log(n));
       for(int i=1;i<=maxi;i++)
       {
           sum+=n/pow(5,i);
       }

        cout<<sum<<endl;
    }
    return 0;
}