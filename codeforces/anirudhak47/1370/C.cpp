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
bool isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1) 
        return false; 
  
    // Check from 2 to n-1 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 
int highestPowerOf2(int n) 
{ 
    return log2(n & (~(n - 1))); 
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
    cin >> t;
    while(t--)
    {
        long long int a,b,x,n,m,k,sum=0,ans=0,res=0;
        cin>>n;
        if(n==1){
            cout<<"FastestFinger"<<endl;
        }
        else{
            if(n%2==1||n==2){
                cout<<"Ashishgup"<<endl;
            }
            else{
                double result=log2(n);
                if(fmod(result,1)==0 ){
                    cout<<"FastestFinger"<<endl;   
                }
                else{
                    if(highestPowerOf2(n)>1){
                        cout<<"Ashishgup"<<endl;

                    }
                    else{
                        long double xx=n;
                        n/=2;
                        int count=0;
                        if(!isPrime(n))
                        {
                            cout<<"Ashishgup"<<endl;
                        }
                        else{
                            cout<<"FastestFinger"<<endl;
                        }
                    }
                    

                }


            }




        }
//       printvector(arr);
//        sort(arr.begin(),arr.end());


    }
    return 0;
}