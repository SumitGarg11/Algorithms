// Input: 101
// Output: Ye
// Explanation: In 101, the 0 can be flipped to make it all 1


// Input: 11
// Output: No
// Explanation: No matter whichever digit you flip, you will not get the desired string.


// Input: 1
// Output: Yes
// Explanation: We can flip 1, to make all 0’s
#include <bits/stdc++.h>
using namespace std ;
// bool canWeFlip(string &s){
//     int zeros =0;
//     int ones = 0;
//     for(char c : s){
//         (c == '0') ? zeros++ : ones++;
//     }
//     return (zeros == 1 || ones == 1);

// }
// int main(){
//     string s  = "1000";
//     canWeFlip(s) ? cout<<"YES" : cout<<"NO";

// }
 



// This function returns true if we can
// make all bits the same in the given binary string s.
bool canMakeAllSame(string &s) {
    int zeros = 0, ones = 0;

    // Traverse through the given string and
    // count numbers of 0's and 1's
    for (char ch : s) {
        (ch == '0') ? ++zeros : ++ones;
    }

    // Return true if any of the two counts is 1
    return (zeros == 1 || ones == 1);
}

// Driver code
int main() {
    string s = "10";
    canMakeAllSame(s) ? cout << "Yes\n" : cout << "No\n";
    return 0;
}

