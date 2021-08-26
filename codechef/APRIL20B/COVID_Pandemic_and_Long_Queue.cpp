#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        int store=6;
        for (int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if (arr[i] &&arr[j])
                {
                    store=min(store,j-i);
                }
            }
        }
        if(store>=6)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
    }
    return 0;
}