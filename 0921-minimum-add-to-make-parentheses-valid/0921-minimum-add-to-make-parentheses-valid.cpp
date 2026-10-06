class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int close = 0;
        for (char x : s) {
            if (x == '(') {
                st.push(x);
            } else {
                if (!st.empty()) {
                    st.pop();
                } else {
                    close++;
                }
            }
        }
        return st.size() + close;
    }
};