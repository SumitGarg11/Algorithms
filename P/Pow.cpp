#include  <bits/stdc++.h>
using namespace std;
double func(double x, long n ){
    if(n == 0) return 1;
    if(n < 0) return func(1/x,-n);
    if(n % 2  == 0) return func(x*x, n/2);
    return x*func(x*x, (n-1) / 2);
}
int main(){
    double x;
    int  n;
    cin>>x>>n;
    double ans = func(x,(long)n);
    cout<< ans;
}
