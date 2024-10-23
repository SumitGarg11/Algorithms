// Input : 00011110001110
// Output : 2
// We need to convert 1's sequence
// so string consist of all 0's.
// Input : 010101100011
// Output : 4
//  in these question u find the min flip the sequence 
#include <bits/stdc++.h>
using namespace std;
int minFlip(char *a, int l){
    char last =  ' ';
    int flipCount = 0;
    for(int i=0; i<l; i++){
        if(last != a[i]){
            flipCount++;
        }
        last = a[i];
    }
    return flipCount/2;

}
int main(){
    char s[] = "00001111000011000011001001";
    int l = strlen(s);

    cout<<minFlip(s,l)<<endl;
}