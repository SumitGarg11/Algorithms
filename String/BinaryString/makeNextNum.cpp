// Input: 10011
// Output: 10100
// Explanation:Here n = (19)10 = (10011)2
// next greater integer = (20)10 = (10100)2 


// Input: 111011101001111111
// Output: 111011101010000000 

#include <bits/stdc++.h>
using namespace std;
string nextGreater(string s){
    int l = s.length();
    int i;
    for(i=l-1; i>=0; i--){
        if(s.at(i) == '0'){
            s.at(i) = '1';
            break;
        }
        else {
            s.at(i) = '0';
        }
    }
    if(i<0){
        s= '1'+s;
    }
    return s;

}
int main(){
    string s = "0001";
    cout<<nextGreater(s)<<endl;

}