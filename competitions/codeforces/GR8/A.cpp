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
int fibs(int n) 
{ 
    int a = 1, b = 1, c, i; 
    if( n == -1) 
        return 0;

    if( n == 0) 
        return 1;
       if(n==1){
       	return 1;
       } 
    for(i = 2; i <= n; i++) 
    { 
       c = a + b; 
       a = b; 
       b = c; 
    } 
    return b; 
} 

int fibl(int n) 
{ 
    int a = 1, b = 2, c, i; 
    if( n == 0) 
        return 0;
       if( n == 1) 
        return 1; 
    if( n == 2) 
        return 2; 
    for(i = 3; i <= n; i++) 
    { 
       c = a + b; 
       a = b; 
       b = c; 
    } 
    return b; 
} 


int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--)
   {
    long long a,b,n;
    cin>>a>>b>>n;
    long long int max=(a<=b)?b:a;
    long long temp=(a>=b)?b:a;
    long long count=0;
    while(max<=n)
    {
        max+=temp;
        temp=max-temp;
        count++;
    }
    cout<<count<<endl;
   }
    return 0;
}
