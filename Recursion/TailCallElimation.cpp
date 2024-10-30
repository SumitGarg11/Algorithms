#include <iostream>
using namespace std;

void print(int n) 
{ 
start: 
    if (n < 0)  
        return; 
    cout <<" " << n; 
  
    // Update parameters of recursive call 
    // and replace recursive call with goto 
    n = n - 1; 
    goto start; 
} 

int main() {
    int n = 5;
    print(n);
    return 0;
}
