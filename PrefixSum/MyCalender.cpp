#include <bits/stdc++.h>
using namespace std;
class MyCalendarTwo {
public:
    vector<pair<int,int>> doubleOverlappingRegion;  // two booking alredy occur
    vector<pair<int,int>> overAllBooking;   // all booking that booked
     
    // formula milan 
    bool formulaMilan(int a1,int b1, int a2, int b2 ){
        return max(a1,a2) < min(b1,b2);
    }
    // formulaPlace
    pair<int,int> formulaPlace(int a1,int b1, int a2, int b2){
        return {max(a1,a2),min(b1,b2)};
    }

    MyCalendarTwo() {
        
    }
    
    // very easy question 
    // based on formula Milan and formula place

    // check kre ge kon se two point overlapp ho rhe hai using the formula milan
    // find kre ge overlapp region using the formula place
    // formula milan 
    //max(a1,a2) < min(b1,b2) then overlapp hai 
    // Formula place 
    // max(a1,a2) , min(b1,b2) suppose a1 ,b1 is ans so overlapp region a1,b1 hoga 

    

    bool book(int startTime, int endTime) {
        // check kro new startTime, endTime se overlapp na kre agar kiya tho third booking 
        // overlapp ho jaye gi  jo ho nhi saktha 

        for(pair<int,int> region: doubleOverlappingRegion){
            if(formulaMilan(region.first, region.second, startTime, endTime )){
                return false; // third booking occur
            };
        }
        for(pair<int,int> booking : overAllBooking ){
            // check kro double booking exist or not
            if(formulaMilan(booking.first,booking.second, startTime, endTime  )){
                // if exist push on doubleOverlapping booking
                doubleOverlappingRegion.push_back(formulaPlace(booking.first,booking.second, startTime, endTime ));
            }
        }
        overAllBooking.push_back({startTime, endTime});
        return true;

    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */