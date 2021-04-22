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
        vector<long long int> arr(n);
        loop(i,0,n)
        {
            cin>>arr[i];
        }
        vector<long long int> fri(k);
        long long int l=0,r=n-1;
        loop(i,0,k)
            {
                  cin>>fri[i];
             }
                
        //       printvector(arr);
        sort(arr.begin(),arr.end());
        sort(fri.begin(),fri.end());
        int j=0;
        while(fri[j]==1){
            sum+=2*arr[r];
            r--;
            j++;
        }

            for (int i = k-1; i >=j; i--)
                {
                   
                    if(fri[i]%2==1){
                                    sum+=arr[l]+arr[r];
                                    l+=fri[i]-1;
                                    r-=1;
                                }
                                else{
                                    sum+=arr[l]+arr[r];
                                    l+=fri[i]-1;
                                    r-=1;
                            }
                
                }
//       printvector(arr);
//        sort(arr.begin(),arr.end());
        cout<<sum<<endl;

    }
    return 0;
}