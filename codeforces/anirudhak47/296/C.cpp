#include "bits/stdc++.h"
using namespace std;
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
 int mod=1000000007;
//////////////////////////
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif
     int a,b,x,n,m,k,sum=0,ans=0,res=0;
    cin >> n>>m>>k;
    vector<int> arr(n);
            loop(i,0,n)
            {
                cin>>arr[i];
            }
    vector<vector<int>> oarr(m,(vector<int> (3,0)));
    loop(i,0,m){
    	cin>>oarr[i][0]>>oarr[i][1]>>oarr[i][2];
    }        
    vector<vector<int>> qarr(k,(vector<int> (2,0)));
    vector<int>solarr(n,0);
    loop(i,0,k){
    	cin>>qarr[i][0]>>qarr[i][1];
    	for(int j=qarr[i][0]-1;j<=qarr[i][1]-1;j++){
    		solarr[j]++;
    	}
    }        
    for(int i=0;i<m;i++){
    	for(int j=oarr[i][0];j<=oarr[i][1];j++){
    		arr[j-1]+=oarr[i][2]*solarr[i];
    	}
    }

    printvector(arr);

    //       printvector(arr);
    //        sort(arr.begin(),arr.end());
    
    return 0;
}