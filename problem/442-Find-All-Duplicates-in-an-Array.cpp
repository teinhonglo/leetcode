class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return nums;
        sort(nums.begin(), nums.end());
        vector<int> dup_vec;
        int cur_num = nums[0];
        bool is_same = false;
        for(int i = 1; i < nums.size(); i++){
            if(cur_num == nums[i] && !is_same){
                dup_vec.push_back(cur_num);
                is_same = true;
            }else{
                cur_num = nums[i];
                is_same = false;
            }
        }
        return dup_vec;
    }
};
