class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int cn = nums[0];
        
        for(int i = 1; i < nums.size(); i++){
            if(cn == nums[i]){
                break;
            }else{
                cn = nums[i];
            }
        }
        return cn;
    }
};
