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
#define INF 1000000000
long long int mod=1000000007;
//////////////////////////
int main()
{
    
    ll h,l=1;
    cin >> h;
    cout<<0;
    char a;
    cin>>a;
    bool lie;
    if (a=='L'){lie=1;}
    else{lie=0;}
    for(int i=2;i<=300;i++){
    	cout<<(l+h)/2;
    	cin>>a;
    	if (lie&&i%2==1){
    		if(a=='L')a='G';
    		else if (a=='G'){a='L';}
    	}
    	if (a=='E'){break;}
    	if(a=='L'){
    		h=(l+h)/2;
    	}
    	if(a=='G'){
    		l=(l+h)/2;
    	}



    }
    return 0;
}
