#include "bits/stdc++.h"
using namespace std;
using namespace std;
typedef long long ll;
typedef vector<int> vi; 
typedef vector< vi > vvi; 
/////////////////////////
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define loop(i,a,b) for (int i = a; i < b; i++)
//////////////////////////
#define printvector(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define printstack(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define PI_val 3.14159265359
#define printpair(n) cout<<n.F<<" "<<n.S
#define printvop(n) loop(i,0,n.size()-1){printpair(n[i])<<endl;}
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
long long int mod=1000000007;
//////////////////////////
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif
    ll t;
    cin >> t;
    while(t--)
    {
        long long int even=0,odd=0,a,b,x,n,m,k,sum=0,ans=0,res=0;
        cin>>n;
        vector<long long int> evenarr;
        vector<long long int> oddarr;
        vector<int> arr(2*n);
        loop(i,0,2*n)
        {
            cin>>arr[i];
            if(arr[i]%2==0){
                evenarr.PB(i);
            }
            else{
                oddarr.PB(i);
            }
        }
        if(evenarr.size()%2==1){
            evenarr.pop_back();
            oddarr.pop_back();}
        else{
            if(evenarr.empty()==0){
                evenarr.pop_back();
                evenarr.pop_back();
            }
            else{
                oddarr.pop_back();
                oddarr.pop_back();
            }
        }
        
        for(int i=0;i<evenarr.size();i+=2){
            cout<<evenarr[i]+1<<" "<<evenarr[i+1]+1<<endl;
        }
        
        for(int i=0;i<oddarr.size();i+=2){
            cout<<oddarr[i]+1<<" "<<oddarr[i+1]+1<<endl;
        }

//       printvector(arr);
//        sort(arr.begin(),arr.end());


    }
    return 0;
}