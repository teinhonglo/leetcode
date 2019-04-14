class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> range{-1, -1};
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                if(range[0] == -1){
                    range[0] = i;
                    range[1] = i;
                }else{
                    range[1] = i;
                }
            }
        }
        return range;
    }
};
