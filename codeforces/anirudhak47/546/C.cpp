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
    long long int a,b,x,y,n,m,k,sum=0,ans=0,res=0;
    cin >> n;
    queue <long long int> q1,q2;
   	cin>> n;
   	loop(i,0,n){
   		cin>>m;
   		q1.push(m);
   	}
   	cin>> n;
   	loop(i,0,n){
   		cin>>m;
   		q2.push(m);
   	}
   	m=0;
   	while(!q1.empty()&&!q2.empty()){
   		x=q1.front();
   		q1.pop();
   		y=q2.front();
   		q2.pop();
if(x>y)
		{
			q1.push(y);
			q1.push(x);
		}
		else if(x<y)
		{
			q2.push(x);
			q2.push(y);
		}
		m++;
		if(m>1e6) break;
	}
	if(q1.empty()) cout<<m<<" "<<2<<endl;
	else if(q2.empty()) cout<<m<<" 1\n";
	else cout<<-1<<endl;

    return 0;
}