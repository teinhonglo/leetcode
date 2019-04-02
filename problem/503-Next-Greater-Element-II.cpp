class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int len_nums = nums.size();
        vector<int> nge(len_nums, -1);
        int j = 1;
        int cur_idx = 0, count = 0;
        for(int i = 0; i < len_nums; i++){
            j = 1;
            while(j < len_nums){
                cur_idx = (i + j < len_nums)? i + j: (i + j) % len_nums;
                if(nums[i] < nums[cur_idx]){
                    nge[i] = nums[cur_idx];
                    break;
                }
                j++;
            }
        }
        return nge;
    }
};
