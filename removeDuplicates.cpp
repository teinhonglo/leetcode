class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> nodup_num;
        if(nums.size() > 0){ 
            nodup_num.push_back(nums[0]);
        }else{
            return 0;
        }
        for(int i = 1; i < nums.size(); i++){
            if(nodup_num.back() != nums[i]){
                nodup_num.push_back(nums[i]);
            }
        }
        nums = nodup_num;
        return nodup_num.size();
    }
};
