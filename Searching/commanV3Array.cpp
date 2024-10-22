#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,vector<int> &arr3) 
    {
        int n1 = arr1.size();
        int n2 = arr2.size();
        int n3 = arr3.size();
        
        vector<int> ans;
        int i=0,j=0,k=0;
        int last = INT_MIN;
        
        
        while(i<n1 && j<n2 && k<n3){
            
            
            if(arr1[i] == arr2[j] && arr2[j] == arr3[k] && arr1[i] != last ){
                ans.push_back(arr1[i]);
                
                last = arr1[i];
                i++;j++;k++;
            }
            
            else if (min({arr1[i], arr2[j], arr3[k]}) == arr1[i])
                i++;
            else if (min({arr1[i], arr2[j], arr3[k]}) == arr2[j])
                j++;
            else
                k++;
            
        }
        return ans;
    }
};