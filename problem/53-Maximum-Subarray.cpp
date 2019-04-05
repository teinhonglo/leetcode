class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        for(int i = 1; i < nums.size(); i++){
            // dynamic programming
            nums[i] = (nums[i] > nums[i] + nums[i-1])?nums[i]:nums[i] + nums[i-1];
            // recording maximum value
            if(nums[i] > max_sum){
                max_sum = nums[i];
            }
        }
        return max_sum;
    }
};
