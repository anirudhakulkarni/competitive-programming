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
        long long int n,sum=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i=0;i<n;i++)
        {
                    int pass=1;

            for(int j=i;j>-1;j--)
            {
                if(arr[i]>arr[j]){
                    pass=0;
                    break;
                }
            }
            sum+=pass;
        }
        cout<<sum<<endl;
    }
    return 0;
}