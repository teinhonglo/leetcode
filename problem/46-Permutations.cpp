class Solution {
public:
    void backtrack(vector<vector<int>>& permut_nums, 
                   vector<int>& nums, vector<int>& tmp_list){
        if(tmp_list.size() == nums.size()){
            permut_nums.push_back(tmp_list);
            return;
        }
        bool is_cont = false;
        for(int i = 0; i < nums.size(); i++){
            // check whther exist in tmp_list or not
            for(int j = 0; j < tmp_list.size(); j++){
                if(nums[i] == tmp_list[j]){
                    is_cont = true;
                    break;
                }
            }
            if(is_cont){
                is_cont = false;
                continue;
            }
            // backtracking
            tmp_list.push_back(nums[i]);
            backtrack(permut_nums, nums, tmp_list);
            tmp_list.pop_back();
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> tmp_list;
        vector<vector<int>> permut_nums;
        backtrack(permut_nums, nums, tmp_list);
        return permut_nums;
    }
};
