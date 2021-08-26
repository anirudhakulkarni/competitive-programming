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
#define printvop(n) loop(i,0,n.size()){printpair(n[i])<<endl;}
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
    int m,a,b,x,n,sum=0,ans=0;
    cin >> n>>m;
    vector<pair<int,int> >arr;
            loop(i,0,m)
            {
            	long long int xx,yy;
            	cin>>xx>>yy;
            	pair<long long int,long long int> pa;
            	pa=make_pair(yy,xx);
            	arr.PB(pa);
                
            }

    //       printvector(arr);
            sort(arr.rbegin(),arr.rend());
            int current=0;
            loop(i,0,m){
            	if (current==n){
            		break;
            	}
            	else{
            		ans+=min(arr[i].second,n-current)*arr[i].first;
            		current+=min(arr[i].second,n-current);
            		
            	}
            }
            cout<<ans<<endl;
    return 0;
}