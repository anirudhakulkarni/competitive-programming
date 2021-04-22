#include "bits/stdc++.h"
using namespace std;
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
long long mod=1000000007;
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
        ll a,b,x,y,p,q,n,m,k,sum=0,ans=0,res=0;
        string s,r;
        cin>>n;
        set<int> xxx;
        vector<int> arr(n);

        loop(i,0,n)
        {
            cin>>arr[i];
            xxx.insert(arr[i]);
        }
        
//       printvector(arr);
       sort(arr.begin(),arr.end());
       map<int,int> frec;
       for(auto tt:xxx){
       	frec.insert(make_pair(tt,0));
       }
       for (int i = 0; i < n; ++i)
       {
       	/* code */frec[arr[i]]++;

       		if(frec[arr[i]]>2){

       			cout<<"NO"<<endl;
       			sum=1;
       			break;
       		}

       }
       if(sum==0){
       	if(arr[n-1]==arr[n-2]){
       		cout<<"NO"<<endl;
       			sum=1;
       			
       	}
       }
       if(sum==0){
       		vector<int> ansarr;
       		for (auto zatu:frec)
       		{
       			
				if(zatu.second==2){
					ansarr.PB(zatu.first);
				}       			/* code */
       		}
       		cout<<"YES"<<endl;
       		sort(ansarr.begin(),ansarr.end(),greater<int>());
       		for (auto it=xxx.begin(); it != xxx.end(); ++it) 
       		{
       			/* code */
       			
       			cout<<*it<<" ";
       		}
       		for (int i = 0; i < ansarr.size(); ++i)
       		{
       			/* code */
       			cout<<ansarr[i]<<" ";
       		}
       		cout<<endl;
       }


 

    }
    return 0;
}

