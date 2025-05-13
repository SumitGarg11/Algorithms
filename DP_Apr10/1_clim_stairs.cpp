#include <bits/stdc++.h>
using namespace std;
int climbing(int n){
    if(n == 0) return 1;
    if(n == 1) return 1;
    return climbing(n-1)+ climbing(n-2);
}
int main(){
    int n ;
    cin>>n;
    cout<<climbing(n);
}