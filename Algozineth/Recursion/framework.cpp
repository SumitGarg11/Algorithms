#include <bits/stdc++.h>
using namespace std;
int n;
int queens[10];
bool check(int row, int col)
{
    // can we place the queen at this row and col
    // check if we can place the queen without attack
    for (int pr = 0; pr < row; pr++)
    {
        // previous row p check kar rhe hai ki kis col m queen tha
        int pc = queens[pr]; // kis col m queen tha
        if (pc == col || abs(row - pr) == abs(col - pc))
        { // attack ho gya so
            //  abs(row-pr) == abs(col-pc) check for the diagnal
            return 0;
        }
    }
    return 1;
}
int rec(int level)
{
    // explore all possible solution by deciding [level .... n-1]
    // when i stop ? when our level is on bottom
    if (level == n)
    {
        return 1; // why? because we pass one way to place the queen
    }
    int ans = 0;
    // resursive way
    for (int ch = 0; ch < n; ch++)
    { // choice all coloums
        if (check(level, ch))
        {
            queens[level] = ch;    // jis level par tha i.e row so us choice p queen fill  kar di
            ans += rec(level + 1); // no of ways
            // unplace
            queens[level] = -1;
        }
    }
    return ans;
}
void solve()
{

    cin >> n; // n queen
    // make the state where we store the queen or queens ko arrange kre ge

    memset(queens, -1, sizeof(queens)); // abhi state or queens array m koi bhi queen nhi hai
    // starting m level kya hai i.e 0 so rec(0) call kar de ge
    int ans = rec(0); // iska kaam hona chaiye ki ye sabhi level ho explore kar le
    cout << ans;
}
int main()
{
    solve();
}
