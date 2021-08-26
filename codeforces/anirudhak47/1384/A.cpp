#include "bits/stdc++.h"
using namespace std;
using namespace std;
typedef long long ll;
typedef vector<ll> vli; 
typedef vector< vli > vvli; 
/////////////////////////
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define loop(i,a,b) for (ll i = a; i < b; i++)
//////////////////////////
#define printvector(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define printstack(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define PI_val 3.14159265359
#define vasort(v) sort((v).begin(), (v).end())
#define vdsort(v) sort((v).begin(), (v).end(),greater<int>())
#define printpair(n) cout<<n.F<<" "<<n.S
#define printvop(n) loop(i,0,n.size()-1){printpair(n[i])<<endl;}
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
const int MAX = 26;
//////////////////////////
string printRandomString(int n) 
{ 
    char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',  
                          'o', 'p', 'q', 'r', 's', 't', 'u', 
                          'v', 'w', 'x', 'y', 'z' }; 
  
    string res = ""; 
    for (int i = 0; i < n; i++)  
        res = res + alphabet[rand() % MAX]; 
      
    return res; 
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
        ll a,b,x,y,p,q,n,m,k,sum=1,ans=0,res=0;
       
        cin>>n;
        vector<int> arr(n);
        loop(i,0,n)
        {
            cin>>arr[i];
            if(arr[i]>ans){
                ans=arr[i];
            }
        }
        ans=52;
        char anna[n+1][ans];
        char s[ans];
        for (int i = 0; i < ans; ++i)
        {
            s[i]='a';
        }
        for (int i = 0; i < n; ++i)
        {
            if(i==0){
                char t[ans];
            for (int ii = 0; ii < ans; ++ii)
            {
                /* code */t[ii]=s[ii];
            }
            for (int ii = arr[i]; ii < ans; ++ii)
            {
                /* code */t[ii]=(char)(s[ii]+sum);
            }
            sum=(sum+1)%26+1;
            for (int i = 0; i < ans; ++i)
            {
                cout<<t[i];
            }
            cout<<endl;
            continue;

            }
            if(arr[i-1]!=0)
            {char t[ans];
                        for (int ii = 0; ii < ans; ++ii)
                        {
                            /* code */t[ii]=s[ii];
                        }
                        for (int ii = max(arr[i],arr[i-1]); ii < ans; ++ii)
                        {
                            /* code */t[ii]=(char)(s[ii]+sum);
                        }
                        sum=(sum+1)%26+1;
                        for (int i = 0; i < ans; ++i)
                        {
                            cout<<t[i];
                        }
                        cout<<endl;}
            else{

                char t[ans];
                        for (int ii = 0; ii < ans; ++ii)
                        {
                            /* code */t[ii]=s[ii];
                        }
                        for (int ii = 0; ii < ans; ++ii)
                        {
                            /* code */t[ii]=(char)(s[ii]+sum);
                        }
                        for (int ii = 0; ii < ans; ++ii)
                        {
                            /* code */s[ii]=t[ii];
                        }
                        sum=(sum+1)%26;
                        for (int i = 0; i < ans; ++i)
                        {
                            cout<<t[i];
                        }
                        cout<<endl;
            }
            
        }

       char t[ans];
       ll i=n-1;
            for (int ii = 0; ii < ans; ++ii)
            {
                /* code */t[ii]=s[ii];
            }
            for (int ii = arr[i]; ii < ans; ++ii)
            {
                /* code */t[ii]=(char)(s[ii]+sum);
            }
            sum=(sum+1)%26+1;
            for (int i = 0; i < ans; ++i)
            {
                cout<<t[i];
            }
            cout<<endl;
        
        
//       printvector(arr);
//        sort(arr.begin(),arr.end());


    }
    return 0;
}