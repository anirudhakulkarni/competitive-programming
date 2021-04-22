#include "bits/stdc++.h"
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
ll mod=1000000007;
//////////////////////////
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif
    ll a,b,x,y,p,q,n,m,k,sum=0,ans=0,res=0;
    string s,r;
    cin >> s;
    n=s.length();
    for (int i = 0; i < n; ++i)
    {
        if(s[i]=='8' || s[i]=='0'){
            ans=1;
            cout<<"YES"<<endl;
            cout<<s[i]<<endl;
            break;
            }
    }
    if(ans!=1){for (int i = 0; i < n; ++i)
        {
            if(ans!=1)/* code */
            {for (int ii = i+1; ii < n; ++ii)
                        {
                            /* code */
                            if((((int)s[i]-48)*10+((int)s[ii]-48))%8==0){
                                cout<<"YES\n";
                                cout<<(((int)s[i]-48)*10+((int)s[ii]-48));
                                ans=1;
                                break;
                            }
                        }}
        }}
    if(ans!=1){
        for (int i = 0; i < n; ++i)
        {
            /* code */
            if(ans!=1){
                for (int ii = i+1; ii < n; ++ii)
                {
                    /* code */
                    if(ans!=1){
                        for (int iii = ii+1; iii < n; ++iii)
                        {
                            /* code */
                             if((((int)s[i]-48)*100+((int)s[ii]-48)*10+((int)s[iii]-48))%8==0){
                                cout<<"YES\n";
                                cout<<(((int)s[i]-48)*100+((int)s[ii]-48)*10+((int)s[iii]-48));
                                ans=1;
                                break;
                            }

                        }
                    }
                }
            }

        }



    }
    if(ans==0){
        cout<<"NO";
    }
    return 0;
}