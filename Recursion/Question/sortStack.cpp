#include <bits/stdc++.h>
using namespace std;

class SortedStack
{
public:
    stack<int> s;
    void sort();
};

void insertInSortedWay(stack<int> &s, int num)
{
    if (s.empty() || s.top() < num)
    { // Corrected `s.top()`
        s.push(num);
        return;
    }

    int n = s.top();
    s.pop();

    insertInSortedWay(s, num);

    s.push(n);
}

void SortedStack::sort()
{
    if (s.empty())
    {
        return;
    }

    int num = s.top();
    s.pop();

    sort();

    insertInSortedWay(s, num); // Insert the popped element back in sorted order
}
