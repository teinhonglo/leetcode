class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() -1;
        int mid = (left + right) / 2;
        bool is_find = false;
        
        while(left <= right){
            mid = (left + right) / 2;
            if(target < nums[mid]){
                right = mid - 1;
            }else if(target > nums[mid]){
                left = mid + 1;
            }else{
                is_find = true;
                break;
            }
        }
        
        if(is_find){
            return mid;
        }else{
            return -1;
        }
    }
};
