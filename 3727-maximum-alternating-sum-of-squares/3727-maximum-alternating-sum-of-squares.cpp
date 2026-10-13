class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
         for(int i = 0; i < n; i++) {
            nums[i] = abs(nums[i]);
        }
        sort(nums.begin(), nums.end());
        long long sum = 0;
        for(int i = n / 2; i < n; i++) {
            sum += 1LL * nums[i] * nums[i];
        }//suming the greater element
        for(int i = 0; i < n / 2; i++) {
            sum -= 1LL * nums[i] * nums[i];
        }//suming the smallest ellement
        return sum;
    }
};