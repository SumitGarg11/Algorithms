#include <bits/stdc++.h>
using namespace std;
void  kthMove(int disc, int source , int target, int aux, int k){
    // move disc -1 from source to aux - (2^(disc-1))-1
    if( k <= (1<<(disc-1))-1 ){
        kthMove(disc-1,source,aux,target,k);
    }
}
int main(){

}