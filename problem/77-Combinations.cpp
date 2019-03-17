class Solution {
public:
    void backtrack(vector<vector<int>>& comb, vector<int>& tmp, 
                   vector<int>& nums, int start, int k){
        if(tmp.size() == k){
            comb.push_back(tmp);
        }
        for(int i = start; i < nums.size(); i++){
            tmp.push_back(nums[i]);
            backtrack(comb, tmp, nums, i + 1, k);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> comb;
        vector<int> tmp;
        vector<int> nums;
        for(int i = 1; i <= n; i++){
            nums.push_back(i);
        }
        backtrack(comb, tmp, nums, 0, k);
        return comb;
    }
};
