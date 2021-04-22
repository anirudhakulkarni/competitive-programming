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
/////////////////////////
void fastscan(ll &number) 
{
    bool negative = false; 
    register ll c; 
  
    number = 0; 

    c = getchar(); 
    if (c=='-') 
    {  
        negative = true; 

        c = getchar(); 
    } 
  

    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 

    if (negative) 
        number *= -1; 
} 

ll binary_srch(vector<ll> arr,ll e)
{
    ll mid,low=0,high=arr.size()-1;
        while(low<=high)
        {
            mid=(low+high)>>1;
            if(arr[mid]==e)
            {
                return mid;
            }
            if(e>arr[mid])
            {
                if(arr[mid]*2 >=e) return mid;
                high=--mid;
            }
            else{
                low=++mid;
            }
        }
    return -1;
}

void solve()
{
    ll n,x,day=0,k;
    bool flag;
    fastscan(n);
    fastscan(x);
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        fastscan(a[i]);
    }
    sort(a.begin(),a.end(),greater<ll>());
    while(!a.empty())
    {
        day++;
        if(a[0] <=x)
        {
            day+=a.size()-1;
            a.clear();
            /*x=a[0]*2;
            a.erase(a.begin());*/
        }
        else{
            k=-1;
            if(a[a.size()-1]<=x)k=binary_srch(a,x);
            if(k!=-1)
            {
                x=a[k]*2;
                a.erase(a.begin()+k);
            }
            else{
                if(*a.begin()>>1 >=x)
                {
                    x*=2;
                }
                else{
                    *a.begin()=min(*a.begin(),(*a.begin()-x)*2);
                    x*=2;
                    if(*a.begin()*2 <= x)
                    {
                        for(int i=1;i<a.size();i++)
                        {
                            if(a[i-1]<a[i])
                            {
                                swap(a[i],a[i-1]);
                            }
                            else{
                                break;
                            }
                        }
                    }
                }
            }
        }
    }

    printf("%ld\n",day);
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
fastscan(t);
    while(t--)
    {

        solve();

        /*cin>>n;
        vector<int> arr(n);
        loop(i,0,n)
        {
            cin>>arr[i];
        }*/
        
//       printvector(arr);
//        sort(arr.begin(),arr.end());


    }
    return 0;
}


