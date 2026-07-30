class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<char,int>freq;
        string s=to_string(n);
        for(auto c:s){
            freq[c]++;
        }
        int sum=0;
        for(auto x:freq){
          int p=x.first;
          int q=x.second;
          sum += (p-'0')*q;
        }
        return sum;
    }
};