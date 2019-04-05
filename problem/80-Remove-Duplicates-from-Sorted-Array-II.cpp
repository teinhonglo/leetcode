class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // check if valid vector or not.
        if(nums.size() == 0) return 0;
        // initial parameter (record, count and remove)
        int cur_num = nums[0];
        int cur_count = 1;
        int rm_num = 0;
        // return size of the vector
        int ck_size = nums.size();
        
        for(int i = 1; i < ck_size; i++){
            // check number of the duplicates
            if(nums[i] == cur_num){
                cur_count++;
            }else{
                cur_num = nums[i];
                cur_count = 1;
            }
            // remove the duplicates
            if(cur_count > 2){
                // tmp vector
                rm_num = nums[i];
                // shift all value to left
                for(int j = i; j < ck_size - 1; j++){
                    nums[j] = nums[j+1];
                }
                nums[ck_size-1] = rm_num;
                // shirnk search range
                ck_size--;
                i--;
            }
        }
        return ck_size;
    }
};
