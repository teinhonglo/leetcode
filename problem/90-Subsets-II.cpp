class Solution {
public:
    void backtracking(vector<int>& nums, vector<int>& cur_comb, 
                      vector<vector<int>>& total_comb, int st_idx){
        // record each possible combinaiton
        total_comb.push_back(cur_comb);
        // iterate each elements
        for(int i = st_idx; i < nums.size(); i++){
            cur_comb.push_back(nums[i]);
            backtracking(nums, cur_comb, total_comb, i + 1);
            cur_comb.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> cur_comb;
        vector<vector<int>> total_comb;
        sort(nums.begin(), nums.end());
        // back tracking
        backtracking(nums, cur_comb, total_comb, 0);
        // remove duplicated element
        set<vector<int>>s(total_comb.begin(), total_comb.end());
        total_comb.assign(s.begin(), s.end());
        return total_comb;
    }
};
