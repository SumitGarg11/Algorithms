#include <bits/stdc++.h>
using namespace std;
int nCr(int n , int c){
    long long res = 1;
    for(int i = 0; i<c; i++){
        res = res * (n-i);
        res = res / (i+1);
    }
    return res;
}
void pasc_row(int n){
    for(int c = 1; c<= n; c++){
        cout<<nCr(n-1,c-1)<<" ";
    }

}
int main(){
    int n = 5;
    pasc_row(n);
}