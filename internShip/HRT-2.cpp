// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <string.h>
#include <queue>
bool solution(vector<string> &B) {
    // write your code in C++14 (g++ 6.2.0)
    vector<string> s = B;
    int sx = 0, sy = 0;
    int n = s.size();
    int m = s[0].size();
    int vis[n][m];
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == '<')
            {
                int l = i, r = j;
                vis[l][r] = 1;
                r--;
                while (r >= 0 && s[l][r] == '.')
                {
                    vis[l][r] = 1;
                    r--;
                }
            }
            else if (s[i][j] == '>')
            {
                int l = i, r = j;
                vis[l][r] = 1;
                r++;
                while (r < m && s[l][r] == '.')
                {
                    vis[l][r] = 1;
                    r++;
                }
            }
            else if (s[i][j] == '^')
            {
                int l = i, r = j;
                vis[l][r] = 1;
                l--;
                while (l >= 0 && s[l][r] == '.')
                {
                    vis[l][r] = 1;
                    l--;
                }
            }
            else if (s[i][j] == 'v')
            {
                int l = i, r = j;
                vis[l][r] = 1;
                l++;
                while (l < n && s[l][r] == '.')
                {
                    vis[l][r] = 1;
                    l++;
                }
            }
            if (s[i][j] != '.') { vis[i][j] = 1; }
            if (s[i][j] == 'A')
            {
                sx = i;
                sy = j;
                vis[i][j] = 0;
            }
        }
    }
    // rep(i,0,n)
    // {
    //     rep(j,0,m) cout<<vis[i][j]<<" ";
    //     cout<<"\n";
    // }
    int reach[n][m];
    memset(reach, 0, sizeof(reach));
    if (!vis[n - 1][m - 1])
    {
        queue<pair<int, int>>q;
        q.push({n - 1, m - 1});
        reach[n - 1][m - 1] = 1;
        while (q.size())
        {
            auto it = q.front();
            q.pop();
            int dx[4] = { -1, 1, 0, 0};
            int dy[4] = {0, 0, 1, -1};
            for (int i = 0; i < 4; i++)
            {
                int x = it.first + dx[i];
                int y = it.second + dy[i];
                if (x >= 0 && x < n && y >= 0 && y < m && !vis[x][y] && !reach[x][y])
                {
                    reach[x][y] = 1;
                    q.push({x, y});
                }
            }
        }
    }
    if (reach[sx][sy]) { return true; }
    return false;
}
