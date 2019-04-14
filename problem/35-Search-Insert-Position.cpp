class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = 0;
        for(int i = 0; i < nums.size(); i++){
            if(target <= nums[i]){
                index = i;
                break;
            }
            if(i == nums.size() - 1){
                index = i + 1;
            }
        }
        return index;
    }
};
