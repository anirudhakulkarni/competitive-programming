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
        long int n,sum=0;
        cin>>n;
        if(n<4)
        {
            cout<<1<<"\n"<<n<<" ";
            for(int i=1;i<=n;i++)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
        }
        else if(n%2==0)
        {
            cout<<(n/2)<<"\n"<<"3 "<<"1 "<<"2 "<<"3 "<<"\n";

            for (long int i=4;i<n;i+=2)
            {
                cout<<"2 "<<i<<" "<<i+1<<"\n";
            }
            cout<<"1 "<<n<<"\n";
        }
        else if(n%2==1)
        {
            cout<<(n/2)<<"\n"<<"3 "<<"1 "<<"2 "<<"3 "<<"\n";

            for (long int i=4;i<n;i+=2)
            {
                cout<<"2 "<<i<<" "<<i+1<<"\n";
            }
            
        }


        
        
    }
    return 0;
}