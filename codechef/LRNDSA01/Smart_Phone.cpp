#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    long long int n,sum=0;
	int t;
    long long int mod=1000000007;
	cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        long long int maxi=-1;
        for (int i=0;i<n;i++)
        {
            if(arr[i]*(n-i)>maxi){
                maxi=arr[i]*(n-i);
            }
        }
        cout<<maxi;
    return 0;
}