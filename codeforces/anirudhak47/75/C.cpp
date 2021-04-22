#include "bits/stdc++.h"
using namespace std;
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
long long int gcd(long long int a, long long int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
long long int maxDivisorRange(long long int g, long long int l, int h) 
{ 
    
    long long int res = -1; 
  
    // Loop from 1 to sqrt(GCD(a, b). 
    for (long long int i = l; i * i <= g && i <= h; i++)  
  
        // if i divides the GCD(a, b), then  
        // find maximum of three numbers res, 
        // i and g/i 
        if (g % i == 0) 
            res =max( max(res, i), g / i); 
      
    return res; 
} 
void printDivisors(long long int n,vector<long long int>& v) 
{ 
    // Vector to store half of the divisors 
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i==0) 
        { 
            if (n/i == i) // check if divisors are equal 
                v.push_back(i); 
            else
            { 
                v.push_back(i); 
  
                // push the second divisor in the vector 
                v.push_back(n/i); 
            } 
        } 
    } 
  
    // The vector will be printed in reverse 
     
} 

int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif
    ll t;
 
        long long int g,a,b,x,n,m,k,sum=0,ans=0,tta;
        cin>>a>>b;
        cin>>m;
        g=__gcd(a,b);
        tta=sqrt(g);
        vector<long long int> v;
        printDivisors(g,v);
        sort(v.begin(),v.end());
                loop(i,0,m)
                {
                    cin>>x>>k;
                    ans=-1;
                    
					for(int j=v.size()-1;j>=0;j--){
						if(v[j]<=k &&v[j]>=x){
							ans=v[j];
							break;
						}
														

					}
					cout<<ans<<endl;

                }

                
        //       printvector(arr);
        //        sort(arr.begin(),arr.end());
        



    return 0;
}