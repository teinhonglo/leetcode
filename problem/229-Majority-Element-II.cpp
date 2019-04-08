class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ns = nums.size();
        if(ns == 0) return nums;
        
        sort(nums.begin(), nums.end());
        vector<int> ret;
        int less_n = ns / 3;
        int cur_num = nums[0], cur_count = 1;
        
        for(int i = 1; i < ns; i++){
            if(cur_num == nums[i]){
                cur_count++;
            }else{
                if(cur_count > less_n) ret.push_back(cur_num);
                cur_num = nums[i];
                cur_count = 1;
            }
        }
        
        if(cur_count > less_n) ret.push_back(cur_num);
        return ret;
    }
};
