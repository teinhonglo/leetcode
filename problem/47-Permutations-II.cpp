#include <algorithm>
class Solution {
public:
    void backtrack(vector<vector<int>> &permut, vector<int> &tmp, 
                   vector<int>& nums, vector<int>& track_idxes){
        // tmp_size == nums_size
        if(tmp.size() == nums.size()){
            permut.push_back(tmp);
            return;
        }
        // iterative each element in nums
        for(int i = 0; i < nums.size(); i++){
            // check whether idx in track_idxes or not
            // <algorithm> find
            if(std::find(track_idxes.begin(), track_idxes.end(), i) != track_idxes.end()) {
                // track_idxes contains i
                continue;
            } else {
                // track_idxes does not contain i
                // backtracking
                tmp.push_back(nums[i]);
                track_idxes.push_back(i);
                backtrack(permut, tmp, nums, track_idxes);
                tmp.pop_back();
                track_idxes.pop_back();
            }
        }
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> permut;
        vector<int> tmp, track_idxes;
        backtrack(permut, tmp, nums, track_idxes);
        // remove duplicate elements in permut vector
        // faster than compare with each insert (300 & 1200)
        sort(permut.begin(), permut.end());
        permut.erase(unique(permut.begin(), permut.end()), permut.end());

        return permut;
    }
};
