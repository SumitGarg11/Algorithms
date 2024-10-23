#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "geeksforgeeks  a computer science";
    string s2 = "geeks";
    size_t found = s1.find(s2);
    if (found != string::npos)
    {
        cout << "Found at first occurence : " << found << endl;
    }
    char arr[] = "geeks";
    found = s1.find(arr, found + 1);
    if (found != string::npos)
    {
        cout << "Found at second occurence : " << found << endl;
    }

    string str = "geeksforgeeks a computer science";

// Search for a partial string
// We can also search for a part of the given string.
// Syntax:

size_t find (const char *str, size_t pos, size_t n);
    size_t found1 = str.find("geeks.practice",0, 5);
    if (found1 != string::npos)
        cout << found1 << endl;
    return 0;
}