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
//////////////////////////

string func(string a){
    string aa=a;
    
    reverse(aa.begin(),aa.end());
    bitset<100000> aaa(aa);
    aaa.flip();
    aaa.resize();
    return aa;
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
        ll ans=0,n,res=0;
        string a,b,s,r;
        cin>>n;
        cin>>a;
        cin>>b;
        vector<ll> arr;
        for (int i = n-1; i >= 0; --i)
        {
            /* code */
            if(a[i]==b[i]){
                


            }
            else{
                if(a[i]==a[0]){
                    res++;
                    arr.PB(i+1);
                    a=func(a);
                }
                else{
                    for (ll k = i; k >=0 ; k--)
                    {
                        /* code */
                        if(a[k]==a[0]){
                            ans=k;
                            break;
                        }
                    }
                    res++;
                    arr.PB(ans+1);
                    res++;
                    arr.PB(i+1);

                    string aka=a.substr(0,ans+1);
                    aka=func(aka);
                    a=aka+a.substr(ans+1,n-ans-1);
                    //string baka=a.substr(0,n-i+1);
                    //baka=func(baka);
                    a=func(a);
                    //cout<<aka<<" "<<baka<<" "<<a<<endl;


                }
            }
a=a.substr(0,i);
        }
        cout<<res<<" ";
            for (int i = 0; i < arr.size(); ++i)
            {
                /* code */cout<<arr[i]<<" ";
            }
            cout<<endl;
//       printvector(arr);
//        sort(arr.begin(),arr.end());


    }
    return 0;
}

