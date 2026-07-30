class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_map<char,int>freq;
        for(auto x:s){
            freq[x]++;
        }
        return freq.size();
    }
};