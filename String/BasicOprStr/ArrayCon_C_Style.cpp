// C++ Program to demonstrate string concatenation
// using std::strcat()
#include <bits/stdc++.h>
using namespace std;

int main() {
    char str1[] = "Hello";
    char str2[] = " World";

    // Concatenating str1 and str2
    strcat(str1, str2);

    cout << str1 << endl;
    return 0;
}
