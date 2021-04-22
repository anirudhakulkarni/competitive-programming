#include <bits/stdc++.h>
#define printvector(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<endl;
#define printarry(n) for(int i=0;i<n.length();i++){cout<<n[i]<<" ";}cout<<endl;
#define printstack(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<endl;
#define inarray(n) int arr[n];for(int i=0;i<n;i++){cin>>n[i];}
using namespace std;
long long int mod=1000000007;

int height(vector<int> arr,int x,vector<int> temp){
    if (temp.size()==1){
        return 0;
    }
    else{
        for (int i=0;i<arr[x].size();i++){

        }
        return height(arr,x,)
    }

}



int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	long int t;
    
	cin >> t;
    while(t--)
    {
        long int x,n;
        cin>>n>>x;
        vector<int<int>> arr[n][];
        for (int i=0;i<n-1;i++){
            int u,v;
            cin>>u>>v;
            arr[u].push_back(v);
            arr[v].push_back(u);
        }


        
    }
    return 0;
}