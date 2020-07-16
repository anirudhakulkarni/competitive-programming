#include "bits/stdc++.h"
using namespace std;

int main()
{
    
    long long t;
    cin >> t;
    while(t--)
    {
        long long n,ans=0;
        cin>>n;
        vector<long long> arr(n);
        for(long long i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0){
                ans=1;

            }
        }
        if(ans==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        

    }
    return 0;
}

