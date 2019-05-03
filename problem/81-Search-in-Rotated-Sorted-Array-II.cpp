class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int is_find = false;
        if(nums.size()==0) return false;
        if(nums[0] == target) return true;
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == target){
                is_find = true;
                break;
            }
            if((i == 0 || nums[i-1] < target) &&  target < nums[i]){
                break;
            }
        }
        
        return is_find;
    }
};
