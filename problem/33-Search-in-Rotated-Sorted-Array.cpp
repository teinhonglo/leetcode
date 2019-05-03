class Solution {
public:
    int search(vector<int>& nums, int target) {
        int is_find = -1;
        if(nums.size()==0) return -1;
        if(nums[0] == target) return 0;
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == target){
                is_find = i;
                break;
            }
            if((i == 0 || nums[i-1] < target) &&  target < nums[i]){
                break;
            }
        }
        
        return is_find;
    }
};
