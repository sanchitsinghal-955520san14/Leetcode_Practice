class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> st;
        int i = 0, j = 0;
        int ans = 0;
        while (j < s.size()) {
            if (st.find(s[j]) == st.end()) {
                st.insert(s[j]);
                ans = max(ans, j - i + 1);
                j++;
            }
            else {
                st.erase(s[i]);
                i++;
            }
        }
        return ans;
    }
};
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         unordered_set<char>x;
//         int left=0;
//         int maxi=0;
//          for (int i = 0; i < s.size(); i++) {
//             while (x.find(s[i]) != x.end()) {
//                 x.erase(s[left]);
//                 left++;
//             }
//             x.insert(s[i]);
//             maxi = max(maxi, i - left + 1);
//         }
//         return maxi;
//     }
// };