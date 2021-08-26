#include "bits/stdc++.h"
using namespace std;

int main()
{
    
    long long t;
    cin >> t;
    while(t--)
    {
       long long n,q;
      
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>q;
        while(q--){
            long long x,y;
            cin>>x>>y;
            long long tat=x+y;
            vector<long long>::iterator low1;
            low1 =upper_bound(arr.begin(), arr.end(), tat);
            if(arr[low1-arr.begin()-1]==tat){
                cout<<-1<<endl;
                
            }
            else{
                
                cout<<low1-arr.begin()<<endl;
            
            }

        }
        

    }
    return 0;
}

