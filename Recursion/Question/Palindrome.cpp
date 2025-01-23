#include <bits/stdc++.h>
using namespace std;

bool solve(int start, int end, string s)
{
    if (start >= end)
        return true;
    if (s[start] != s[end])
        return false;
    return solve(start + 1, end - 1, s);
}
int main()
{
    string s = "car";
    int n = s.length();
    bool ans = solve(0, n - 1, s);
    cout << ans << endl;
}