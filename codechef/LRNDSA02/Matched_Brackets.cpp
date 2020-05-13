#include <bits/stdc++.h>
#define print(n) for(int i=0;i<n.size()-1;i++){cout<<n[i]<<" "}
using namespace std;
long long int mod=1000000007;
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	
        long long int n,sum=0;
        cin>>n;
        vector<int> arr(n);
        stack <int> s;
        int maxlength=0,maxloc=0,longloc=0,longlen=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1){
            s.push(arr[i]);}
            if(arr[i]==2){ s.pop();}
            if(s.size()>maxlength){
                maxlength=s.size();
                maxloc=i+1;
            }
            if (s.size()==0){
                arr.push_back(i+1);
            }
        }
        
        for(int i=0;i<arr.size()-1;i++)
        {
            if(longlen<arr[i+1]-arr[i])
            {
                longlen=arr[i+1]-arr[i];
                longloc=i+1;
            }
        }
        cout<<maxlength<<" "<<maxloc<<" "<<longlen<<" "<<longlen<<endl;
        
        
    return 0;
}