class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // using negative to sign whether disappear or not.
        vector<int> dis_nums;
        int idx = 0;
        for(int i = 0; i < nums.size(); i++){
            idx = abs(nums[i]) - 1;
            nums[idx] = (nums[idx] > 0)?-(nums[idx]):nums[idx];
        }
        // check positive or negative
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                dis_nums.push_back(i + 1);
            }
        }
        return dis_nums;
    }
};
