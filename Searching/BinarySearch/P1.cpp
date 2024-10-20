#include <bits/stdc++.h>
using namespace std;
bool check(int mid , int arr[], int n, int x){
    bool isSubArr = false;
    int sum =0;
    int i,j=0;
    for(j = 0; j<mid; j++){
        sum += arr[j];
    }

    while(j<n){
        if(sum > x){
        isSubArr = true;
    }
    sum -= arr[i];
    sum += arr[j];
     i++;
     j++;

    }
    if(sum > x){
        isSubArr = true;
    }
    return isSubArr;
    
}
int MinLenSubArr(int arr[], int x, int n){
    int low =0,high=n;
    int ans = INT_MAX;
    
        
        while(low<=high){
            int mid = low + (high-low)/2;
            if(check(mid,arr,n,x)){
                ans = mid;
                high = mid-1;
            }
            else low = mid +1;
        }
    
    return (ans == INT_MAX) ? 0 : ans;
}
int main(){
    int arr[] = {1,1,1,1,1};
    int x= 4;
    int n = 5;
    int ans = MinLenSubArr(arr,x,n);
    cout<<ans<<endl;
}
