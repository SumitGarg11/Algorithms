#include <bits/stdc++.h>
using namespace std;
int n;
int queen[10];
bool check(int row, int col)
{
    for (int pr = 0; pr < row; pr++)
    {
        int pc = queen[pr];
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
    {
        return 1;
    }
    int ans = 0;
    for (int ch = 0; ch < n; ch++)
    {
        if (check(level, ch))
        {
            queen[level] = ch;
            ans += rec(level + 1);
        }
    }
    return ans;
}
void solve()
{
    cin >> n;
    memset(queen, -1, sizeof(queen));
    int ans = rec(0);
    cout << ans;
}
int main()
{

    solve();
}