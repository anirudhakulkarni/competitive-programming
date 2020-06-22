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
int highestPowerOf2(int n) 
{ 
    return log2(n & (~(n - 1))); 
} 
bool prime(long long n)
{
    bool flag=true;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=false;
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
   int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n==1)
        {
            cout<<"FastestFinger"<<endl;
        }
        else if(n==2)
        {
            cout<<"Ashishgup"<<endl;
        }
        else if(n>2)
        {
            if(n%2!=0)
            {
                cout<<"Ashishgup"<<endl;
            }
            else
            {
                int count=0;
                long long temp=n;
                while(temp%2==0)
                {
                    count++;
                    temp=temp/2;
                }
                if(count==1)
                {
                    if(prime(temp)==true)
                    {
                        cout<<"FastestFinger"<<endl;
                    }
                    else
                    {
                        cout<<"Ashishgup"<<endl;
                    }
                }
                else
                {
                    if(temp==1)
                    {
                        cout<<"FastestFinger"<<endl;
                    }
                    else
                    {
                        cout<<"Ashishgup"<<endl;
                    }
                }
            }
        }
    }
    return 0;
}