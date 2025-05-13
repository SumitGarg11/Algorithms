#include <bits/stdc++.h>
using namespace std;
void passcal_row(int n){
    long long ans  =1;
    cout<<ans<<" ";
    for(int i = 1; i<n; i++){
        ans = ans*(n-i);
        ans = ans / (i);
        cout<<ans<<" ";
    }
    cout<<endl;
}
int main(){
    int n  = 5;
    passcal_row(n);
}