class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // using count to record 
        // 1) the number of the hit
        // 2) the index of the hit
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                nums[count] = nums[i];
                count++;
            }
        }
        return count;
    }
};
