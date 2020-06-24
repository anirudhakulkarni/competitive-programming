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
long long int arr[100][100]={0};

int lcsn(string s,string r,long long int n,long long int m){
	long long int result=9;
	cout<<22<<endl;
	if(arr[n][m]){
		result=arr[n][m];
	}
	else{
		if(n==0 || m==0){
			result= 0;
		}
		else if(s[n-1]==r[m-1]){
			result= 1+lcsn(s,r,n-1,m-1);
		}
		else{
			result=max(lcsn(s,r,n-1,m),lcsn(s,r,n,m-1));
		}
		arr[n][m]=result;
	}
	
	return result;



}


int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif
    long long int a,b,x,n,m,k,sum=0,ans=0,res=0;
    string s,r;
    cin >> s;
    cin>>r;

    cout<<lcsn(s,r,s.size(),r.size());
    
    return 0;
}
