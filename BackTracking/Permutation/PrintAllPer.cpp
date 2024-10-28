#include <bits/stdc++.h>
using namespace std;
void printPermut(string s, int index){
    if(index >= s.length()){
        cout<<s<<" "<<endl;
        return;
    }
    for(int j =index; j < s.length();j++){
        swap(s[index],s[j]);
        printPermut(s, index+1);
    }
}
int main(){
    string s;
    cin>>s;
    int index =0;
    printPermut(s,index);
}