#include <bits/stdc++.h>
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
const int nax = 1005;
int t[nax];
//////////////////////////
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif
    int n, a;
    scanf("%d%d", &n, &a);
    for(int i = 1; i <= n; ++i)
        scanf("%d", &t[i]);
    int answer = 0;
    for(int i = 1; i <= n; ++i) if(t[i]) {
        // can we catch criminal in city i?
        int distance = i - a; // distance from a
        int j = a - distance; // the other city at the same distance
        if(j < 1 || j > n || t[i] == t[j])
            ++answer;
    }
    printf("%d", answer);
    return 0;
}