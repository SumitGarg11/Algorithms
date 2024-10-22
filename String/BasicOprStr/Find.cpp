#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1 = "geeksforgeeks  a computer science";
    string s2 = "geeks";
    size_t found = s1.find(s2);
    if(found != string::npos){
        cout << "Found at first occurence : " << found << endl;
    }
    char arr[] = "geeks";
    found = s1.find(arr, found+1);
    if(found != string::npos){
        cout << "Found at second occurence : " << found << endl;
    }
    return 0;

}