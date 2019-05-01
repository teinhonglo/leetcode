class Solution {
public:
    int findMin(vector<int>& nums) {
        //int min = nums[0];
        for(int i = 1; i < nums.size(); i++){
            nums[0] = (nums[i] < nums[0])?nums[i]:nums[0];
            if(nums[i] < nums[i-1]) break;
        }
        return nums[0];
    }
};
