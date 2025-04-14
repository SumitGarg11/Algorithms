#include <bits/stdc++.h>
using namespace std;

int fun(int ind, vector<int>&h){
    if(ind == 0) return 0;
    int left = fun(ind - 1 ,h) + abs(h[ind] - h[ind-1]);
    int right = INT_MAX;
    if(ind > 1) right =  fun(ind - 2 ,h) + abs(h[ind] - h[ind-2]);
    return min(left,right);
}
int frogJump(int n, vector<int> &h)
{
    return fun(n-1,h);
}