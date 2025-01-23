#include <bits/stdc++.h>
using namespace std;
int n;
int queens[10];
bool check(int row, int col)
{
    for (int pr = 0; pr < row; pr++)
    {
        int pc = queens[pr];
        if (pc == col || abs(row - pr) == abs(col - pc))
        {
            return 0;
        }
    }
    return 1;
}
int rec(int level)
{
    if (level == n)
        return 1;
    int ans = 0;
    for (int ch = 0; ch < n; ch++)
    {
        if (check(level, ch))
        {
            queens[level] = ch;
            ans += rec(level + 1);
            queens[level] = -1;
        }
    }
    return ans;
}
void solve()
{
    cin >> n;
    memset(queens, -1, sizeof(queens));
    int ans = rec(0);
    cout << ans;
}
int main()
{
    solve();
}