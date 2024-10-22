// Input : str = “001”
// Output : 1
// Minimum number of flips required = 1
// We can flip 1st bit from 0 to 1 

// Input : str = “0001010111”
// Output : 2
// Minimum number of flips required = 2
// We can flip 2nd bit from 0 to 1 and 9th 
// bit from 1 to 0 to make alternate 
// string “0101010101”.

#include <bits/stdc++.h>
using namespace std;
char flip(char c){
    return (c == '0')? '1' : '0';
}
int getStringWithChar(string str, char expected){
    int flipCount = 0;
    for(int i=0; i<str.length();i++){
        if(str[i]!=expected){
            flipCount++;
        }
        expected= flip(expected);
    }
    return flipCount;
}
int canWEMakeStringAlternate(string s){
    return min(getStringWithChar(s,'0'), getStringWithChar(s,'1'));
}
int main(){
    string s = "0001010111";
    cout <<canWEMakeStringAlternate(s)<<endl;

}