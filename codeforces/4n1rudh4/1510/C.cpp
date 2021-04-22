#include <bits/stdc++.h>

using namespace std;

#define test int t; cin>> t; while (t--)
#define fo(i, k, n) for (int i = k; i < n; i++)
#define ll long long
#define ld long double
#define all(x) x.begin(), x.end()
#define deb(x) cout << #x << " " << x << '\n'
#define is_sorted(v) std::is_sorted(all(v))
#define pb push_back
#define pf push_front

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<pii> vpii;
typedef set<int> Si;
typedef set<ll> Sll;
typedef set<pii> Spii;
typedef set<pll> Spll;
typedef map<int, int> Mii;
typedef map<ll, ll> Mll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;

const int mod = 1000000007;
const double pi = 3.1415926535897932384626;
const double e = 2.71828182845904523536;

bool visited[100001];
vector<int> adj[100001];
int Distance[100001];
map<int, int> freq;

void dfs(int s)
{
    if (visited[s])
    {
        return;
    }
    visited[s] = true;
    for (auto x : adj[s])
    {
        dfs(x);
    }
}

int bfs(int s)
{
    queue<int> q;
    visited[s] = true;
        int leaf = 0;
    if (freq[s] == 1){
                    leaf++;
                }
    q.push(s);
    Distance[s] = 0;
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        for (auto x : adj[s])
        {
            if (!visited[x])
            {
                if (freq[x] == 1){
                    leaf++;
                }
                visited[x] = true;
                Distance[x] = Distance[s] + 1;
                q.push(x);
            }
        }
    }
    return leaf;
}

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

pair<int, int> extremes_array(int arr[],int n)
{
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return make_pair(min, max);
}

void solve(int n, int m)
{
    for(int i=0; i<n; i++){
        freq[i] = 0;
    }
    fo(i, 0, n){
        adj[i].clear();
        Distance[i] = 0;
        visited[i] = false;
    }
    int x, prev;
    for(int i=0; i<m; i++){
        int s; cin >> s;
        cin >> prev;
        freq[--prev]++;
        for(int j=1; j<s; j++){
            cin >> x;
            x--;
            if (j == s-1)freq[x]++;
            else{
                freq[x]+=2;
            }
            adj[prev].push_back(x);
            adj[x].push_back(prev);
            prev = x;
        }
    }
    vector<int> v;
    for (int i=0; i<n; i++){
        if (freq[i] == 1){
            v.push_back(i);
        }
        //cout << i <<" ->" << freq[i] << endl;
    }
    int leaf = bfs(0);
    if (leaf < 1){
        cout << 0 << endl;
    }
    else if (leaf == 1){
        cout << 1 << endl;
        if (v[0] == n-1){
            cout << v[0] << " " << 1 << endl;
        }else{
            cout << v[0] << " " << n << endl;
        }
    }else{
        cout << leaf-1 << endl;
        for(int j = 1; j<v.size(); j++){
           // cout << v[j] <<"<-" << endl;
            cout << v[j-1]+1 << " " << v[j]+1 << endl;
        }
    }
    return;
    
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int n, m;
    while(true){
        cin >> n >> m;
        if (n==0){
            break;
        }
        solve(n, m);
    }
    return 0;
}