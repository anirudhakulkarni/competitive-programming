#include <bits/stdc++.h>
#define printvector(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n';
#define printstack(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n';
using namespace std;

long long int mod=1000000007;
int MaxCSeq(vector<int> arr,long long int l,int longlen,int longloc)
{
    //finds longest gap between given element in a vector//
    vector <long long int> MaxCSeqv;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==l){
            MaxCSeqv.push_back(i);
        }
    }
    for(int i=0;i<MaxCSeqv.size()-1;i++)
    {
        if(longlen<MaxCSeqv[i+1]-MaxCSeqv[i])
        {
            longlen=MaxCSeqv[i+1]-MaxCSeqv[i];
            longloc=MaxCSeqv[i];
        }
    }
    
}






int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	long int t;
    int longlen=0,longloc=0;

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
//        printvector(arr);
//        sort(arr.begin(),arr.end());
        MaxCSeq(arr,arr[0],longlen,longloc);
        cout<<longlen;
        for (int i=0;i<n;i++)
        {

        }
    }
    return 0;
}