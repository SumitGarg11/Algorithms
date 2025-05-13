#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r){
    long long res = 1;
    for(int i = 0; i<r; i++){
        res = res * (n - i);
        res = res / (i+1);
    }
    return res;
}
int pascalTra(int r, int c){
    int elem = nCr(r-1,c-1);
    return elem;
}
int main(){
    int r = 5,c = 3;
    int element  = pascalTra(r,c);
    cout<<element;
}