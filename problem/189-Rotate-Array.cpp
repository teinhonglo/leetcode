class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>nums_copy(nums.begin(), nums.end());
        // rotate an array
        for(int i = 0; i < nums.size(); i++){
            nums[(i + k) % nums.size()] = nums_copy[i];
        }
    }
};
