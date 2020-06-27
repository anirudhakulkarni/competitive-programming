#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<ll> vli; 
typedef vector< vli > vvli;

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
ll mod=1000000007;
//////////////////////////
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif
    ll a,b,x,y,p,q,n,m,k,sum=0,ans=0,res=0;
    string s,r;
    cin >> m>>k;
    ll xxx=k;
    if(k==0){
    	if(m!=0)
    	cout<<-1<<" "<<-1;
    else{

    	cout<<0<<" "<<0;
    }
    }
    else if(m==1){
    	if(k<=9){
    		cout<<k<<" "<<k;
    	}
    	else{
    		cout<<-1<<" "<<-1;
    	}
    }
    else{
    	int arr[m]={0};
    	int arr2[m]={0};
    	arr[0]++;
    	k-=1;
    	for (int i = m-1; i >=0; --i)
    	{
    		/* code */
    		if(k<=9){
    			arr[i]+=k;
    			k-=k;
    			break;
    		}
    		else{
    			arr[i]+=9;
    			k-=9;
    		}
    	}
    	for (int i = 0; i < m; ++i)
    	{
    		/* code */cout<<arr[i];
    	}
    	cout<<" ";
    	k=xxx;
    	if(k>=9){
    		arr2[0]+=9;
    		k-=9;
    	}
    	else{
    		arr2[0]+=k;
    		k=0;
    	}
    	for (int i = 1; i < m; ++i)
    	{
    		/* code */

    		if(k<=9){
    			arr2[i]+=k;

    			k-=k;
    			break;
    		}
    		else{
    			arr2[i]+=9;
    			k-=9;
    		}
    	}
    	for (int i = 0; i < m; ++i)
    	{
    		/* code */cout<<arr2[i];
    	}
    	cout<<" ";


    	
    }
    
    return 0;
}
