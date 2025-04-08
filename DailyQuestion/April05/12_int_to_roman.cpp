class Solution {
public:
    string intToRoman(int num) {
        vector<int> n = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> s = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string ans;
        int i = 0;
        while(num > 0){
            if(num  >= n[i])  {
                ans = ans + s[i];
                num -= n[i];
            }
            else{
                i++;
            }
        }
        return ans;
    }
};

 Time Complexity (T.C.):
The outer while(num > 0) loop could run up to ~15 times in the worst case (e.g., for num = 3999).

The loop visits each Roman numeral in a fixed-length array (n and s, both size 13).

So, the worst-case time complexity is O(1) — because the number of iterations is limited by a constant (maximum Roman numeral parts needed for any number ≤ 3999).

✅ T.C. = O(1) (Constant time)

 Space Complexity (S.C.):
You're using two constant-size vectors (n and s) and one string ans.

The result string will have at most ~15 characters (for 3888 = MMMDCCCLXXXVIII).

So, no extra memory is used that scales with input size.

✅ S.C. = O(1) (Constant space)

How to explain this in an interview:
I used a greedy approach by mapping known Roman numeral values from highest to lowest and subtracting the largest possible value from the input number repeatedly. I maintain two vectors—one for the integer values and one for the corresponding Roman symbols. I iterate through them, building the result string until the number reduces to 0.

Since the Roman numeral values are fixed and limited, the time and space complexities are both O(1), making this solution highly efficient.

