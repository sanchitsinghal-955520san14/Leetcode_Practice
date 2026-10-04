class Solution {
public:
    bool checkValidString(string s) {
        int left = 0;//for min no of (   
        int right = 0;  //for max no of )
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                left++;
                right++;
            }
            else if(s[i] == ')') {
                left--;
                right--;
            }
            else { 
                left--;  
                right++; 
            }
            if(right < 0)
                return false;
            if(left < 0)
                left = 0;
        }
        return left == 0;
    }
};