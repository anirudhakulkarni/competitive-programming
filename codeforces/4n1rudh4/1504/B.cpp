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
//////////////////////////
#define PI_val 3.14159265359
#define vasort(v) sort((v).begin(), (v).end())
#define vdsort(v) sort((v).begin(), (v).end(),greater<int>())
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define ln endl
#define out1(x1) cout << x1 << ln
#define out2(x1,x2) cout << x1 << " " << x2 << ln
#define out3(x1,x2,x3) cout << x1 << " " << x2 << " " << x3 << ln
#define out4(x1,x2,x3,x4) cout << x1 << " " << x2 << " " << x3 << " " << x4 << ln
#define out5(x1,x2,x3,x4,x5) cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << ln
#define out6(x1,x2,x3,x4,x5,x6) cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << " " << x6 << ln
long long mod=1000000007;
//////////////////////////
bool solve(string s,string r,int n){
            ll one=0,zero=0;
            int reverse=0;
     for(int i=0;i<n;i++){
            if(s[i]=='1'){
                one++;
            }
            else{
                zero++;
            }
        }
        int point=-1;
        // cout<<one<<endl;
        for(int i=0;i<n;i++){
            // cout<<i<<" "<<one<<" "<<zero<<endl;
            if(one==zero){
                point=n-1-i;
                for(int j=point+1;j<n;j++){
                    if(s[j]!=r[j]){
                        // cout<<s[j]<<r[j]<<j<<endl;
                        return false;
                    }
                }
                break;
            }
            if(s[n-i-1]=='1'){
                one--;
            }
            if(s[n-i-1]=='0'){
                zero--;
            }
            
        }
        if(point==-1){
            return s==r;
        }
                    // cout<<"F "<<point<<" "<<one<<" "<<zero<<" "<<reverse <<endl;

        while(point>=0){
            // cout<<point<<" "<<one<<" "<<zero<<" "<<reverse <<endl;
            if(one!=zero){
                if((s[point]!=r[point]&&!reverse)||(s[point]==r[point]&&reverse)){
                    return false;   
                }    
                else{
                                if(s[point]=='1'){
                    one--;
                }
                else{
                    zero--;
                }
                point--;
                continue;
                }
            }
            // cout<<point<<endl;
            if((s[point]!=r[point]&&!reverse)||(s[point]==r[point]&&reverse)){
                       if(s[point]=='1'){
                        one--;
                    }
                    else{
                        zero--;
                    }
                reverse=!reverse;
                point--;
                continue;
            }
            if(s[point]=='1'){
                    one--;
                }
                else{
                    zero--;
                }
                point--;
            
        }
        // cout<<one<<zero<<point<<endl'
        return true;
        
}
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif
    fio;
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,x,y,p,q,n,m,k,sum=0,ans=0,res=0;
        string s,r;
        cin>>n;
        cin>>s;
        cin>>r;
       if(solve(s,r,n)){
           cout<<"YES"<<endl;
       }
    else{
        cout<<"NO"<<endl;
    }
//        sort(arr.begin(),arr.end());
    }
    return 0;
}