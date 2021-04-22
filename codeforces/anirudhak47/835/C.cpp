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

int cal(int xl,int yl,int xr,int yr,vector<vector<int>> arr2){
	int res=0;

	for (int i=yl;i<=yr;i++){
		for (int j=xl;j<=xr;j++){
			//cout<<i<<" "<<j<<endl;
			if(arr2[i][j]!=-1){
			//	cout<<i<<"    "<<j<<endl;
				res+=arr2[i][j];

			}
		}
	}
	return res;
}







vector<vector<int>> arr(101,vector<int>(101,-1));


int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif
     int t,q,c,a,xl,yl,xr,yr,b,x,y,s,n,m,k,sum=0,ans=0,res=0;
    cin >> n>>q>>c;
    for(int i=0;i<n;i++){
    	cin>>x>>y>>s;
    	arr[y][x]=s;
    }
/*    for(int tt=0;tt<100;tt++){
    		for(int yy=0;yy<100;yy++){
    			cout<<arr[tt][yy]<<" ";
    		}
    		cout<<endl;
    	}
    	*/
    for(int i=0;i<q;i++){
    	cin>>t>>xl>>yl>>xr>>yr;
    	vector<vector<int>>arr3=arr;
    /*	*/
    	for(int tt=0;tt<100;tt++){
    		for(int yy=0;yy<100;yy++){
    			if(arr3[tt][yy]!=-1)
    			{
    			    arr3[tt][yy]=(arr3[tt][yy]+t)%(c+1);
    			   			}
    		}
    	}
 
    	cout<<cal(xl,yl,xr,yr,arr3)<<endl;
    }

    return 0;
}