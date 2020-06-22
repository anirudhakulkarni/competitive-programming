#include "bits/stdc++.h"
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
    long long int a,b,x,n,c,m,k,sum=0,ans=0,res=0,q;
    cin >> n;
    map<int, int> amap;
    ;
    int arr[n];
            loop(i,0,n)
            {
                cin>>arr[i];
                sum+=arr[i];
                if(amap[arr[i]]>0){
                                amap[arr[i]]++;}
                else{
                    amap[arr[i]]=1; 
                }
            }
  
    cin>>q;

for (int i = 0; i < q; ++i)
    {
    	/* code */
    	cin>>b>>c;
        sum-=amap[b]*b;
        sum+=amap[b]*c;
        
        amap[c]+=amap[b];
        amap[b]=0;
        
        cout<<sum<<endl;

    }    //       printvector(arr);
    //        sort(arr.begin(),arr.end());
    

    return 0;
}
