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
        long long int a,b,x,n,m,k,sum=0,ans=0,res=0;
        cin>>n>>k;
        vector<int> arr(n);
        loop(i,0,n)
        {
            cin>>arr[i];
        }
        vector<int> fri(k);
        long long int l=0,r=n-1;
        loop(i,0,k)
            {
                  cin>>fri[i];
             }
                
        //       printvector(arr);
        sort(arr.begin(),arr.end());
        sort(fri.begin(),fri.end());
        for (int i = 0; i < k; i++)
        {
            /* code */
            if(fri[i]==1){
                res+=1;
            }
        }
        for (int i = n-1; i >=(n-res) ; i--)
        {
            /* code */
            sum+=2*arr[i];

        }
        for (int i = n-res-1; i >=-res+ n/2; i--)
        {
            /* code */
            sum+=arr[i];
        }
//       printvector(arr);
//        sort(arr.begin(),arr.end());
        cout<<sum<<endl;

    }
    return 0;
}

