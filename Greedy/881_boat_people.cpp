#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(begin(people), end(people));
        int boat =0;
        int i=0,j=n-1;
        while(i<=j){
            if(people[i] + people[j] <= limit){
                i++;j--;boat+=1;
            }
            else {
                j--;boat+=1;
            }
        }
        return boat;

    }
};