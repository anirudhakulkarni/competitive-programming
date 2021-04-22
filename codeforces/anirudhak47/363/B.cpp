#include <bits/stdc++.h>
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
    long long int a,b,x,n,m,k,sum=0,ans=0,res=0;
    cin >> n>>k;
    vector<int> arr(n);
            loop(i,0,n)
            {
                cin>>arr[i];
            }
            
    //       printvector(arr);
    //        sort(arr.begin(),arr.end());
    loop(i,0,k){
    	sum+=arr[i];
    }
    vector<int> solarr;
    solarr.PB(sum);
    loop(i,0,n-k){
    	sum+=arr[i+k]-arr[i];
    	solarr.PB(sum);
    }
    ans=0;
    loop(i,0,n-k+1){
    	if(solarr[i]<solarr[ans]){
    		ans=i;
    	}
    }
    cout<<ans+1;
    return 0;
}