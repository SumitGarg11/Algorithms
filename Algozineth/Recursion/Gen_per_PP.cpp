#include <bits/stdc++.h>
using namespace std;
int n;
map<int, int> mpp;
vector<int> curr_per;
vector<vector<int>> all_sol;
void rec(int level)
{
    if (level == n)
    {
        all_sol.push_back(curr_per);
    }
    for (auto v : mpp)
    {
        if (v.second != 0)
        {
            mpp[v.first]--;
            curr_per.push_back(v.first);
            rec(level + 1);
            curr_per.pop_back();
            mpp[v.first]++;
        }
    }
}
void solve()
{
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    rec(0);
    for (int i = 0; i < all_sol.size(); i++)
    {
        for (int j = 0; j < all_sol[0].size(); j++)
        {
            cout << all_sol[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    solve();
}