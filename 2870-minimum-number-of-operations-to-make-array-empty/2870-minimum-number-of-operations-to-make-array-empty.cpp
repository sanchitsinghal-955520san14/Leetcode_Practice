class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n=nums.size();
        for(auto x:nums){
            freq[x]++;
        }
        int count=0;
        for (auto y : freq) {
            int b = y.second;
            if (b == 1) {
                return -1;
            }
            if (b % 3 == 1) {
                count += (b / 3) - 1;
                count += 2;
            }
            else {
                count += b / 3;
                if (b % 3 == 2) {
                    count++;
                }
            }
        }
        return count;
    }
};