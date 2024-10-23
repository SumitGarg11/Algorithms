// C++ Program to demonstrate string concatenation
// using std::append()
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1("Hello");
    string str2(" World");

    // Concatenation str1 and str2
    str1.append(str2);

    cout << str1 << endl;
    return 0;
}
