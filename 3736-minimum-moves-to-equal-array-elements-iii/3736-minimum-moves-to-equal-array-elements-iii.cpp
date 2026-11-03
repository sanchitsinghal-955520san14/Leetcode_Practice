class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum=0;
        int max=*max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i] !=max){
                sum= sum + abs(nums[i]-max);
            }
        }
        return sum;
    }
};