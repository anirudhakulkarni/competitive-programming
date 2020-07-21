#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
ll n,m;
vector<vector<ll>>adj;
vector<ll> ans;
vector<bool> visited;
void dfs(ll v){
	visited[v]=true;
	for(auto u:adj[v]){
		if(!visited[u]){
			dfs(u);
		}
	}
	ans.push_back(v);
}

void topological_sort(){
	ans.clear();
	visited.assign(n,false);
	for(ll i=0;i<n;i++){
		if(!visited[i]){
			dfs(i);
		}
	}
	reverse(ans.begin(),ans.end());
}


int main()
{
freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);

  cin >> n >> m;
  ll x, y;
  adj.resize(n, vector<ll>());
  for (int i = 0; i < n; ++i)
  {
    cin >> x >> y;
    x--, y--; // to convert 1-indexed to 0-indexed
    adj[x].push_back(y);
  }
  topological_sort();
  cout << "Topological Order : \n";
  for (int v : ans)
  {
    cout << v + 1 << ' '; // converting zero based indexing back to one based.
  }
  cout << '\n';
  return 0;
}
