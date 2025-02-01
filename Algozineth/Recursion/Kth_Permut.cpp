#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> curr_per;
map<int, int> mpp;
void print()
{
    for (auto v : curr_per)
    {
        cout << v << " ";
    }
    cout << "\n";
}
void rec(int level)
{
    if (level == n)
    {
        k--;
        if (k == 0)
            print();
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
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
        mpp[arr[i]]++;
    }
    rec(0);
}
int main()
{
    solve();
}