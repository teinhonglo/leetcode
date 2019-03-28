class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cur_one = 0, max_one = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]){
                cur_one += 1;
            }else{
                cur_one = 0;
            }
            if(cur_one > max_one)
                max_one = cur_one;
        }
        return max_one;
    }
};
