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
int stu1[1000];
int stu2[1000];
 
int check(int n){
	int flag = 0;
	for(int i = 1; i <= n; i++){
		if(i != stu1[i]){
			flag = 1;
			break;
		}
	}
	return flag;
}
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif
    int NN=1000005;
    long long int t, b,x,n,m,k,sum=0,res=0,a[NN];
    cin>>t;
    while(t--) {
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> stu1[i];
		}
		int ans = 0;
		memset(stu2, 0, sizeof(stu2));
		for(int i = 1; i <= n; i++){
			int j = i;
			while(stu1[j] != i){
				stu2[i]++;
				j = stu1[j];
			}
			stu2[i]++;
		}
		cout << stu2[1];
		for(int i = 2; i <= n; i++){
			cout << " " << stu2[i];
		}
		cout << endl;
	}
	return 0;
}