#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<ll> vli; 
typedef vector< vli > vvli;
using namespace std;
/////////////////////////
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define loop(i,a,b) for (ll i = a; i < b; i++)
//////////////////////////
#define printvector(n) for(ll i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define printstack(n) for(ll i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define PI_val 3.14159265359
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
ll mod=1000000007;
#define vasort(v) sort((v).begin(), (v).end())
#define vdsort(v) sort((v).begin(), (v).end(),greater<ll>())
//////////////////////////
vector <int> v[26];
bool used[26] = { false };
vector <char> result;
int t[26];
 
bool dfs1(int u)
{
    t[u] = 1;
    bool res = false;
    for (int i = 0; i < v[u].size(); i++)
    {
        if (t[v[u][i]] == 1)
            res = true;
        else
            if (t[v[u][i]] == 0)
            res |= dfs1(v[u][i]);
    }
    t[u] = 2;
    return res;
}
 
void dfs(int u)
{
    used[u] = true;
    for (int i = 0; i < v[u].size(); i++)
    {
        if (!used[v[u][i]])
            dfs(v[u][i]);
    }
    result.push_back(u + 'a');
}
 
void topsort() 
{
    for (int i = 0; i < 26; ++i)
        used[i] = false;
    result.clear();
    for (int i = 0; i < 26; ++i)
        if (!used[i])
            dfs(i);
    reverse(result.begin(), result.end());
}
 
int main()
{
    int n;
    string s[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < s[i].length(); j++)
        {
            if (j == s[i + 1].length())
            {
                cout << "Impossible";
                return 0;
            }
            if (s[i][j] != s[i + 1][j])
            {
                v[s[i][j] - 'a'].push_back(s[i + 1][j] - 'a');
                break;
            }
        }
    for (int i = 0; i < 26; i++)
        t[i] = 0;
    for (int i = 0; i < 26; i++)
        if (t[i] == 0)
        if (dfs1(i))
        {
            cout << "Impossible";
            return 0;
        }
    topsort();
    for (int i = 0; i < 26; i++)
        cout << result[i];
    return 0;
}
