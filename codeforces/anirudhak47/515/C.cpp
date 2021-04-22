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
    long long int a,b,x,n,m,k,sum=0,ans=0,res=0;
    cin >> n;
	string s;
	cin>>s;
	vector<int> solarr;
	loop(i,0,n){
		int xx=s[i]-48;
		if(xx==2){
			solarr.PB(2);}
		if(xx==3){
			solarr.PB(3);}
		if(xx==5){
			solarr.PB(5);}
		if(xx==6){
			solarr.PB(5);
			solarr.PB(3);}
		if(xx==7){
			solarr.PB(7);}
		if(xx==8){
			solarr.PB(2);
			solarr.PB(2);
			solarr.PB(2);
			solarr.PB(7);
		}
		if(xx==4){
			solarr.PB(2);
			solarr.PB(3);
			solarr.PB(2);
		}

		if(xx==9){
			solarr.PB(7);
			solarr.PB(3);
			solarr.PB(3);
			solarr.PB(2);
		}
	}  

	sort(solarr.rbegin(),solarr.rend());
	loop(i,0,solarr.size()){
		cout<<solarr[i];
	}



    return 0;
}