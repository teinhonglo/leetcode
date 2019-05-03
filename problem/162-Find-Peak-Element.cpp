class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int peak = nums[0], peak_idx = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > peak){
                peak = (nums[i] > peak)?nums[i]:peak;    
                peak_idx = i;
            }
            if(nums[i] < nums[i-1]) break;
        }
        return peak_idx;
    }
};
