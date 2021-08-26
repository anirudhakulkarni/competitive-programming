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


int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif
    long long int a,b,x,n,m,k,sum=0,ans=0,maxres=0;
    cin >> n;
    vector<long long int> arr(n);
            loop(i,0,n)
            {
                cin>>arr[i];
            }
    long long int i=n-1;
	while (i!=-1)
	{
		/* code */long long int res=1;
		for (int j = i; j >0;--j)
		{
			/* code */

			if(arr[j]>=arr[j-1]){
				res++;
				if(j==1){
					i=0;	
			}
			}
			else{
				i=j-1;
				break;
			}

		}
		if(i==0){
			i--;
		}
		if(res>maxres){
			maxres=res;
		}

	}
	cout<<maxres;
    //       printvector(arr);
    //        sort(arr.begin(),arr.end());
    
    
    return 0;
}