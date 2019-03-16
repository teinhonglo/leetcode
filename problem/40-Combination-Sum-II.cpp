class Solution {
public:
    vector<vector<int>> comb_candidates;
    void backtrack(vector<int>& candidates, vector<int>& tmp_list, 
                   int sum, int start, int target){
        if(sum == target){
            comb_candidates.push_back(tmp_list);
            return;
        }
        if(target < sum){
            return;
        }
        for(int i = start; i < candidates.size(); i++){
            if(candidates[i] > target) break;
            tmp_list.push_back(candidates[i]);
            sum += candidates[i];
            backtrack(candidates, tmp_list, sum, i + 1, target);
            sum -= candidates[i];
            tmp_list.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> tmp_list;
        // sort candidate array 
        // useful to judge whether break or not
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, tmp_list, 0, 0, target);
        sort(comb_candidates.begin(), comb_candidates.end());
        comb_candidates.erase(unique(comb_candidates.begin(), comb_candidates.end() ),
                              comb_candidates.end());
        return comb_candidates;
    }
}; 
