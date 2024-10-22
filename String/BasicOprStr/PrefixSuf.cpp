// Input : string a = remuneration
//         string b = acquiesce
//         length of pre/suffix(l) = 5
// Output :remuniesce

// Input : adulation
//         obstreperous
//         6
// Output :adulatperous

#include <bits/stdc++.h>
using namespace std;
string GetprefixSuffix(string a, string b, int l){
    string prefix = a.substr(0,l);
    int lb = b.length();
    string suffix = b.substr(lb-l);
    return prefix + suffix;
}
int main(){
    string a = "adulation";
    string b = "obstreperous";
    int l = 6;
    cout<<GetprefixSuffix(a,b,l) << endl;
}