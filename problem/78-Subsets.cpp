class Solution {
public:
    void backtrack(vector<int>& nums, vector<int>& cur_comb, vector<vector<int>>& comb, 
                   int st_idx){
        // record current combination
        comb.push_back(cur_comb);
        // iterate each possible elem.
        for(int i = st_idx; i < nums.size(); i++){
            cur_comb.push_back(nums[i]);
            backtrack(nums, cur_comb, comb, i + 1);
            cur_comb.pop_back();
        }
        
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> comb; // total combination
        vector<int> cur_comb; // current combination
        backtrack(nums, cur_comb, comb, 0);
        return comb;
    }
};
