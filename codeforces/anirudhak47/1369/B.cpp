#include "bits/stdc++.h"
using namespace std;
using namespace std;
typedef long long ll;
typedef vector<int> vi; 
typedef vector< vi > vvi; 
/////////////////////////
#define F first
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
    ll t;
    cin >> t;
    while(t--)
    {
        long long int a=-1,b=-1,x,n,m,k=-1,sum=0,ans=0,res=0;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i < n; ++i)
        {
            /* code */
            if(s[i]=='1'){
                a=i;
                break;
            }

        }
        if(a!=-1)
            {
                        for (int i = a; i <n ; ++i)
                        {
                            /* code */
                            if(s[i]=='0'){
                                b=i;
                                break;
                            }
                        }
                        if(b!=-1){
                            for(int i=n-1;i>=b;i--){
                                if(s[i]=='0'){
                                    k=i;
                                    break;
                                }

                            }
                            if(k!=-1){
                                for(int i=0;i<=a;i++){
                                    cout<<0;
                                }
                                for(int i=0;i<n-k-1;i++){
                                    cout<<1;
                                }
                                cout<<endl;
                            }
                        


                        }
                        else{
                            cout<<s<<endl;
                        }
            }
            else{
                cout<<s<<endl;
            }
//       printvector(arr);
//        sort(arr.begin(),arr.end());


    }
    return 0;
}