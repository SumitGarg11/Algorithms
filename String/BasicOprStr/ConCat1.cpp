// without inbuilt function concatination the string
#include <bits/stdc++.h>
using namespace std;
void concate(char* ans, char*  a, char*  b){
    int i=0;
    while(a[i]!= '\0'){
        ans[i] = a[i];
        i++;
    }
    int j=0;
    while(b[j]!= '\0'){
        ans[i] = b[j];
        i++;
        j++;
    }
    ans[i] = '\0';
    
}
int main(){
    char a[] = "Hello\0";
    char b[] = "World\0";
    int len1 =0;
    int len2 =0;
    while(a[len1] != '\0') len1++;
    while(b[len2] != '\0') len2++;
    char ans[len1+len2+1];
    concate(ans,a,b);
   cout<<ans<<endl;

} 